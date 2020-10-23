#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, int>& a, 
         std::pair<int, int>& b) 
{ 
    return a.second < b.second; 
}

void mysort(std::map<int, int> M) 
{ 
  
    // Declare vector of pairs 
    std::vector<std::pair<int, int> > A; 
  
    // Copy key-value pair from Map 
    // to vector of pairs 
    for (auto& it : M) { 
        A.push_back(it); 
    } 
  
    // Sort using comparator function 
    std::sort(A.begin(), A.end(), cmp); 
  
    // Print the sorted value 
    std::cout << "Duplicates: " << std::endl;
    for (auto& it : A) { 
  
        std::cout << it.first << " was duplicated "
             << it.second << " times." <<std::endl; 
    } 
} 


int main(){

    std::map<int, int> myMap;
    for(int i=0; i<10000;i++){
        myMap[rand() %34]++;
    }
    mysort(myMap);
    /*int randomnumber;
    std::priority_queue<int, std::vector<int>, std::greater<int>> list, ascendinglist;
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
        ascendinglist.push(duplicates[i]);
    }
    while(!ascendinglist.empty()){
        std::cout << ": " << ascendinglist.top() << std::endl;
        ascendinglist.pop();
    }
*/
}