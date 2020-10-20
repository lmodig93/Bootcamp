#include <iostream>



int main(){
    char answer;
    int number = 0;
    std::cout << "Please think of a number between 1-128." << std::endl;
    std::cout << "Is the first bit = 1? Y/N" << std::endl;
    std::cin >> answer;
    if(answer == 'Y') number = number + 1; 
    std::cout << "Is the second bit = 1? Y/N" << std::endl;
    std::cin >> answer;
    if(answer == 'Y') number = number + 2;
    std::cout << "Is the third bit = 1? Y/N" << std::endl;
    std::cin >> answer;
    if(answer == 'Y') number = number + 4;
    std::cout << "Is the fourth bit = 1? Y/N" << std::endl;
    std::cin >> answer;
    if(answer == 'Y') number = number + 8;
    std::cout << "Is the fifth bit = 1? Y/N" << std::endl;
    std::cin >> answer;
    if(answer == 'Y') number = number + 16;
    std::cout << "Is the sixth bit = 1? Y/N" << std::endl;
    std::cin >> answer;
    if(answer == 'Y') number = number + 32;
    std::cout << "Is the seventh bit = 1? Y/N" << std::endl;
    std::cin >> answer;
    if(answer == 'Y') number = number + 64;
    if(number == 0) number = 128;
    std::cout << "The number you are thinking of is " << number << std::endl;
}