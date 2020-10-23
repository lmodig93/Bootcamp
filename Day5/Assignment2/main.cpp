#include <iostream>
#include <queue>

int main(){
    int randomnumber, total=0;
    std::priority_queue<int, std::vector<int>, std::greater<int>> list;
    int duplicates[34] = {0};

    for(int i=0; i<10000;i++){
        randomnumber = rand() %34;
        list.push(randomnumber);
    }
    while(!list.empty()){
        duplicates[list.top()]++;
        //std::cout << "Top of the list: " << list.top() << std::endl;
        list.pop();
    }
    std::cout << "Duplicates:" << std::endl;
    for(int i=0;i<34;i++){
        std::cout << i << ": " << duplicates[i] << std::endl;
    }
}