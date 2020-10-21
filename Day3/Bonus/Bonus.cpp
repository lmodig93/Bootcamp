#ifndef BONUS_H
#define BONUS_H
#include "Bonus.h"

struct item
{
    Record R;
    item *next;
};
item *start_ptr = NULL;

int main(){
    int choice;
    Date d;
    Services s;
    Part p;
    Payment pm;
    d = Date(2020, 10, 21);
    s = Services(Services::ServiceType::oil);
    p = Part(Part::PartType::oillvlsnsr);
    pm = Payment(Payment::PaymentMethod::cash, 9001);

    while(1){
        std::cout << "What do you want to do?" << std::endl; 
        std::cout << "1. Add item at the end of the list." << std::endl; 
        std::cout << "2. Remove item at the front of the list." << std::endl; 
        std::cout << "3. Print the list in the correct order." << std::endl;
        std::cout << "4. Exit." << std::endl;
        std::cin >> choice;
        if(choice == 1) add_item_at_end(d, s, p, pm);
        else if(choice == 2) remove_item_at_front();
        else if(choice == 3) print_list();
        else if(choice == 4) break;
        else std::cout << "Please provide a valid choice." << std::endl;
    }
    item *temp;
    do{
        temp = start_ptr;
        delete temp;
        start_ptr = start_ptr->next;
    }while(start_ptr != NULL);
}
void print_list(){
    item *temp;
    if(start_ptr == NULL){
        std::cout << "List is empty!" << std::endl;
        return;
    }
    temp = start_ptr;
    temp->R.PrintRecord(temp->R);
    int i=1;
    while(temp->next != NULL){
        temp = temp->next;
        i++; 
        temp->R.PrintRecord(temp->R);
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

void add_item_at_end(Date d, Services s, Part p, Payment pm){
    item *temp, *temp2;
    temp = new item;
    temp->R = Record(d, s, p, pm);
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

#endif