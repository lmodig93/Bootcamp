#ifndef BONUS_H
#define BONUS_H
#include "Bonus.h"

void Record::PrintRecord(Record R){
    std::cout << "Date: " << R.date.year << "-" << R.date.month << "-" << R.date.day << std::endl;
    if(R.service.service == Services::ServiceType::oil) std::cout << "Service performed: Oil." << std::endl;
    if(R.service.service == Services::ServiceType::engine) std::cout << "Service performed: Engine." << std::endl;
    if(R.service.service == Services::ServiceType::gearbox) std::cout << "Service performed: Gearbox." << std::endl;
    if(R.service.service == Services::ServiceType::suspension) std::cout << "Service performed: Suspension system." << std::endl;
    if(R.part.part == Part::PartType::oillvlsnsr) std::cout << "Parts replaced: Oil level sensor." << std::endl;
    if(R.part.part == Part::PartType::headlightlamp) std::cout << "Parts replaced: Headlamps." << std::endl;
    if(R.part.part == Part::PartType::suspensionmodule) std::cout << "Parts replaced: Suspension module." << std::endl;
    std::cout << "Price: " << R.payment.amount;
    if(R.payment.method == Payment::PaymentMethod::bill) std::cout << " and customer requested a bill." << std::endl;
    if(R.payment.method == Payment::PaymentMethod::cash) std::cout << " and customer paid with cash." << std::endl;
    if(R.payment.method == Payment::PaymentMethod::creditcard) std::cout << " and customer paid with a credicard." << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

}

Record::Record(Date d, Services s, Part p, Payment pm){
    this->payment.amount = pm.amount;
    this->payment.method = pm.method;
    this->part = p;
    this->service = s;
    this->date.year = d.year;
    this->date.month = d.month;
    this->date.day = d.day;
}
Record::Record(Date d, Services s, Payment pm){
    this->payment.amount = pm.amount;
    this->payment.method = pm.method;
    this->service = s;
    this->date.year = d.year;
    this->date.month = d.month;
    this->date.day = d.day;
}
Record::Record(Date d, Part p, Payment pm){
    this->payment.amount = pm.amount;
    this->payment.method = pm.method;
    this->part = p;
    this->date.year = d.year;
    this->date.month = d.month;
    this->date.day = d.day;
}
Date::Date(const unsigned int &_y, const unsigned int &_m, const unsigned int &_d){
    this->year = _y;
    this->month = _m;
    this->day = _d;
}
Services::Services(const ServiceType &_service){
    this->service = _service;
}
#endif