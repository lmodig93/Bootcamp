#ifndef CIRCULARBUFFER_HPP
#define CIRCULARBUFFER_HPP

#include <iostream>
#include <mutex>
#include <memory>

template <class T>
class circular_buffer{
    public:
        explicit circular_buffer(size_t size) : 
            buf_(std::unique_ptr<T[]>(new T[size])),
            max_size_(size){}
        
        void put(T item);
        T get();
        void reset();
        bool empty() const;
        bool full() const;
        size_t capacity() const;
        size_t size() const;
    private:
        std::mutex mutex_;
        std::unique_ptr<T[]> buf_;
        size_t head_ = 0;
        size_t tail_ = 0;
        const size_t max_size_;
        bool full_ = 0;
};

template <class T>
void circular_buffer<T>::reset(){
    std::lock_guard<std::mutex> lock(mutex_);
    head_ = tail_;
    full_ = false;
}

template <class T>
bool circular_buffer<T>::empty() const{
    return (!full_ && (head_ == tail_));
}

template <class T>
bool circular_buffer<T>::full() const{
    return full_;
}

template <class T>
size_t circular_buffer<T>::capacity() const{
    return max_size_;
}

template <class T>
size_t circular_buffer<T>::size() const{
    size_t size = max_size_;

    if(!full_){
        if(head_ >= tail_){
            size = head_ - tail_;
        }
        else{
            size = max_size_ + head_ - tail_;
        }        
    }
    return size;
}

template <class T>
void circular_buffer<T>::put(T item){
    std::lock_guard<std::mutex> lock(mutex_);
    buf_[head_] = item;

    if(full_){
        std::cout << "Buffer is full! Please get data!" << std::endl;
        tail_ = (tail_ + 1) % max_size_;
    }
    head_ = (head_ + 1) % max_size_;
    full_ = head_ == tail_;
}

template <class T>
T circular_buffer<T>::get(){
    std::lock_guard<std::mutex> lock(mutex_);

    if(empty()){
        std::cout << "Buffer is empty, last value was: ";
        return buf_[tail_ - 1];
    }
    auto val = buf_[tail_];
    full_ = false;
    tail_ = (tail_ + 1) % max_size_;

    return val;
}

#endif //CIRCULARBUFFER_HPP