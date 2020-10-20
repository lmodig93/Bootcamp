#include <iostream>
#include <stdlib.h>
#include "Assignment2.h"

struct item
{
    int age;
    item *next;
};
item *start_ptr = NULL;

int main(){
    int choice;
    while(1){
        std::cout << "What do you want to do?" << std::endl; 
        std::cout << "1. Add item at the end of the list." << std::endl; 
        std::cout << "2. Remove item at the front of the list." << std::endl; 
        std::cout << "3. Print the list in the correct order." << std::endl;
        std::cout << "4. Exit." << std::endl;
        std::cin >> choice;
        if(choice == 1) add_item_at_end();
        else if(choice == 2) remove_item_at_front();
        else if(choice == 3) print_list();
        else if(choice == 4) break;
        else std::cout << "Please provide a valid choice." << std::endl;
    }
}
void print_list(){
    item *temp;
    if(start_ptr == NULL){
        std::cout << "List is empty!" << std::endl;
        return;
    }
    temp = start_ptr;
    std::cout << "1. Age: " << temp->age << std::endl;
    int i=1;
    while(temp->next != NULL){
        temp = temp->next;
        i++; 
        std::cout << i << ". Age: " << temp->age << std::endl;
    }
}

void remove_item_at_front(){
    item *temp;
    if(start_ptr == NULL){
        std::cout << "List is empty!" << std::endl;
        return;
    }
    temp = start_ptr;
    start_ptr = start_ptr->next;
    delete temp;
}

void add_item_at_end(){
    item *temp, *temp2;
    temp = new item;
    std::cout << "Please enter the age of the person being added to the list." << std::endl;
    std::cin >> temp->age;
    temp->next = NULL;
    if(start_ptr == NULL)
        start_ptr = temp;
    else{
        temp2 = start_ptr;
        while(temp2->next != NULL)
            temp2 = temp2->next;
        temp2->next = temp;
    }
}