#include "Circularbuffer.hpp"


int main(){
    circular_buffer<uint16_t> circle(15);
    for(uint16_t i = 0; i<20; i++){
        circle.put(i*2);
    }
    for(uint16_t j = 0; j<20; j++){
        std::cout << circle.get() << std::endl;
    }
    std::cout << "Adding some data points.." << std::endl;
    circle.put(5);
    circle.put(10);
    circle.put(15);
    circle.put(20);
    circle.put(25);
    circle.put(30);
    std::cout << "Slots used in buffer: " << circle.size() << ", unused: " 
        << circle.capacity()-circle.size() << std::endl;
}