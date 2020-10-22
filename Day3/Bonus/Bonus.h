#ifndef BONUS_H
#define BONUS_H
#include <iostream>

class Date{
public:
    Date() = default;
    Date(const unsigned int &_y, const unsigned int &_m, const unsigned int &_d);
//private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
    ~Date() = default;
};

class Services{
public:
    enum ServiceType {oil, engine, suspension, gearbox};
    Services() = default;
    Services(const ServiceType &_service);
    ServiceType service;
    ~Services() = default;
};


class Part{
public:
    enum PartType {oillvlsnsr, headlightlamp, suspensionmodule};
    Part() = default;
    ~Part() = default;
    Part(const PartType &_part):part(_part){};
    PartType part;
};

class Payment{
public:
    enum PaymentMethod {bill, creditcard, cash};
    Payment() = default;
    ~Payment() = default;
    Payment(const PaymentMethod &_method, const unsigned int &_amount):method(_method),amount(_amount){};
    PaymentMethod method;
    unsigned int amount;

};

class Record{
public:
    Record() = default;
    Record(Date d, Services s, Part p, Payment pm);
    Record(Date d, Part p, Payment pm);
    Record(Date d, Services s, Payment pm);
    Date date;
    Services service;
    Part part;
    Payment payment;
    void PrintRecord(Record R);
    ~Record() = default;
};

class LinkedList{
    public:
        LinkedList(){
            start_ptr = nullptr;
        }
        typedef struct item{
            Record R;
            item *next;
        }item_t;
        void add_item_at_end(Record R);
        void print_list();
        void remove_item_at_front();
    private:
        item_t *start_ptr;

};

#endif