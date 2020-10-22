#include "Bonus.h"



int main(){
    LinkedList list;
    int choice;
    Date d;
    Services s;
    Part p;
    Payment pm;
    d = Date(2020, 10, 21);
    s = Services(Services::ServiceType::oil);
    p = Part(Part::PartType::oillvlsnsr);
    pm = Payment(Payment::PaymentMethod::cash, 9001);
    Record R(d, s, p, pm);

    while(1){
        std::cout << "What do you want to do?" << std::endl; 
        std::cout << "1. Add item at the end of the list." << std::endl; 
        std::cout << "2. Remove item at the front of the list." << std::endl; 
        std::cout << "3. Print the list in the correct order." << std::endl;
        std::cout << "4. Exit." << std::endl;
        std::cin >> choice;
        if(choice == 1) list.add_item_at_end(R);
        else if(choice == 2) list.remove_item_at_front();
        else if(choice == 3) list.print_list();
        else if(choice == 4) break;
        else std::cout << "Please provide a valid choice." << std::endl;
    }
    
}