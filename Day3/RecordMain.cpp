#include "Record.h"

int main(){
    Date d;
    Services s;
    Part p;
    Payment pm;


    d = Date(2020, 10, 21);
    s = Services(Services::ServiceType::oil);
    p = Part(Part::PartType::oillvlsnsr);
    pm = Payment(Payment::PaymentMethod::cash, 9001);
    Record R1(d, s, p, pm);
    R1.PrintRecord(R1);

    d = Date(2015, 12, 5);
    s = Services(Services::ServiceType::engine);
    p = Part(Part::PartType::suspensionmodule);
    pm = Payment(Payment::PaymentMethod::bill, 235468);
    Record R2(d, s, p, pm);
    R2.PrintRecord(R2);

    d = Date(2000,1,1);
    p = Part(Part::PartType::headlightlamp);
    pm = Payment(Payment::PaymentMethod::creditcard, 10000);
    Record R3(d, p, pm);
    R3.PrintRecord(R3);

    d = Date(1999, 6, 20);
    s = Services(Services::ServiceType::gearbox);
    pm = Payment(Payment::PaymentMethod::cash, 28000);
    Record R4(d, s, pm);
    R4.PrintRecord(R4);
    return 0; 
}