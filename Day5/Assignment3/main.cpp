#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main(){
    std::map<int, int> myMap;
    std::map<int, int>::iterator itlow, itup;
    for(int i=0;i<1024;i++){
        myMap[rand()]++;
    }
    int randomnumber = rand();
    itlow = myMap.lower_bound(randomnumber);
    itlow--; //Finding the integer that is less than random number.
    itup = myMap.upper_bound(randomnumber);
    std::cout << "Random value to find boundary values for: " << randomnumber << std::endl;
    std::cout << "Closest smaller: " << itlow->first << std::endl; 
    std::cout << "Closest bigger: " << itup->first << std::endl;
}