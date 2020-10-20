#include <iostream>
#include <stdlib.h>

void printArray(unsigned int a, unsigned int b, unsigned int c, unsigned int d){
    int ***aa = new int**[a];
    for(int i=0;i<=a;i++){
        *(aa+i) = new int*[b];
        for(int j=0;j<=b;j++){
            *(*(aa+i)+j) = new int[c];
            for(int k=0;k<=c;k++){
                *(*(*(aa+i)+j)+k) = rand() % d;
                std::cout << *(*(*(aa+i)+j)+k) << " ";
                if(k<c) std::cout << "|";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

int main(){
    unsigned int a=0, b=0, c=0, d=0;
    std::cout << "Choose size of first dimension." << std::endl;
    std::cin >> a;
    std::cout << "Choose size of second dimension." << std::endl;
    std::cin >> b;
    std::cout << "Choose size of third dimension." << std::endl;
    std::cin >> c;
    std::cout << "Choose a number that random values should be below." << std::endl;
    std::cin >> d;
    std::cout << std::endl;
    printArray(a-1, b-1, c-1, d);   
}