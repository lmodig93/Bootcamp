#include <iostream>
#include <stdlib.h>


int main(){

    int Array[8][9][11];
    unsigned int n;
    std::cout << "Please type a positive number." << std::endl;
    std::cin >> n;

    for(int i=0;i<=7;i++){
        for(int j=0;j<=8;j++){
            for(int k=0;k<=10;k++){
                Array[i][j][k] = rand() % n;
                std::cout << Array[i][j][k] << " ";
                if(k<10) std::cout << "|";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}