#ifndef TESTSHAPE_H
#define TESTSHAPE_H
#include "Shape.h"

class testShape{
    public:
        int returnShapeheight(Shape& s){
            return s.height;
        }
        int returnShapewidth(Shape& s){
            return s.width;
        }
};

void testsetvalues(){
    testShape _s;
    Shape *s = new Rectangle;
    bool passed = true;
    s->set_values(5, 5);
    if(_s.returnShapewidth(*s) != 5) {
        passed = false;
    }
    if(_s.returnShapeheight(*s) != 5){
        passed = false;
    }
    s->set_values(-5, -5);
    if(_s.returnShapewidth(*s) == -5) {
        passed = false;
    }
    if(_s.returnShapeheight(*s) == -5){
        passed = false;
    }
    s->set_values(5, INT64_MAX);
    if(_s.returnShapewidth(*s) != 5) {
        passed = false;
    }
    if(_s.returnShapeheight(*s) != INT64_MAX){
        passed = false;
    }
    s->set_values(0, 0);
    if(_s.returnShapewidth(*s) != 0) {
        passed = false;
    }
    if(_s.returnShapeheight(*s) != 0){
        passed = false;
    }
    if(passed){
        std::cout << "Setvalues passed." << std::endl;
    }
    else{
        std::cout << "Setvalues failed." << std::endl;
    }
    delete s;
}

void testoperatorbigger(){
    Shape *s1 = new Rectangle;
    Shape *s2 = new Square;
    bool passed = true;
    s1->set_values(0, 0);
    s2->set_values(5, 0);
    if(*s1>*s2){
        passed = false;
    }
    s1->set_values(5, 5);
    s2->set_values(5, 0);
    if(*s1>*s2){
        passed = false;
    }
    s1->set_values(5, 8);
    s2->set_values(10, 0);
    if(*s1>*s2){
        passed = false;
    }
    s1->set_values(-5, -5);
    s2->set_values(4, 0);
    if(*s1>*s2){
        passed = false;
    }
    if(passed){
        std::cout << "Operatorbigger passed." << std::endl;
    }
    else{s1->set_values(5, 8);
    s2->set_values(10, 0);
    if(*s1>*s2){
        passed = false;
    }
        std::cout << "Operatorbigger failed." << std::endl;
    }
    delete s1;
    delete s2;
}

void testoperatorsmaller(){
    Shape *s1 = new Rectangle;
    Shape *s2 = new Square;
    bool passed = true;
    s1->set_values(0, 0);
    s2->set_values(5, 0);
    if(*s2<*s1){
        passed = false;
    }
    s1->set_values(5, 5);
    s2->set_values(5, 0);
    if(*s2<*s1){
        passed = false;
    }
    s1->set_values(5, 8);
    s2->set_values(10, 0);
    if(*s2<*s1){
        passed = false;
    }
    s1->set_values(-5, -5);
    s2->set_values(4, 0);
    if(*s2<*s1){
        passed = false;
    }
    if(passed){
        std::cout << "Operatorsmaller passed." << std::endl;
    }
    else{
        std::cout << "Operatorsmaller failed." << std::endl;
    }
    delete s1;
    delete s2;
}

void testoperatorequal(){
    Shape *s1 = new Rectangle;
    Shape *s2 = new Square;
    bool passed = true;
    s1->set_values(5, 5);
    s2->set_values(5, 0);
    if(!(*s1==*s2)){
        passed = false;
    }
    s1->set_values(5, 20);
    s2->set_values(10, 0);
    if(*s1==*s2){
        passed = false;
    }
    s1->set_values(5, 5);
    s2->set_values(-5, 0);
    if(*s1==*s2){
        passed = false;
    }
    if(passed){
        std::cout << "Operatorequal passed." << std::endl;
    }
    else{
        std::cout << "Operatorequal failed." << std::endl;
    }
    delete s1;
    delete s2;
}

void testarea(){
    Shape *s1 = new Rectangle;
    Shape *s2 = new Square;
    Shape *s3 = new Triangle;
    Shape *s4 = new Circle;
    s1->set_values(5,5);
    s2->set_values(5,0);
    s3->set_values(5,5);
    s4->set_values(5,0);
    bool passed = true;
    if(s1->area()!=25){
        passed = false;
    }
    if(s2->area()!=25){
        passed = false;
    }
    if(s3->area()!=12){
        passed = false;
    }
    if(s4->area()!=12){
        passed = false;
    }
    s1->set_values(-5,-5);
    s2->set_values(-5,0);
    s3->set_values(-5,-5);
    s4->set_values(-5,0);
    if(s1->area()>0){
        passed = false;
    }
    if(s2->area()>0){
        passed = false;
    }
    if(s3->area()>0){
        passed = false;
    }
    if(s4->area()>0){
        passed = false;
    }
    if(passed){
        std::cout << "Area functions passed." << std::endl;
    }
    else{
        std::cout << "Area functions failed." << std::endl;
    }
    delete s1;
    delete s2;
    delete s3;
    delete s4;
}

void testperimeter(){
    Shape *s1 = new Rectangle;
    Shape *s2 = new Square;
    Shape *s3 = new Triangle;
    Shape *s4 = new Circle;
    s1->set_values(5,5);
    s2->set_values(5,0);
    s3->set_values(5,5);
    s4->set_values(5,0);
    bool passed = true;
    if(s1->perimeter()!=20){
        passed = false;
    }
    if(s2->perimeter()!=20){
        passed = false;
    }
    if(s3->perimeter()!=15){
        passed = false;
    }
    if(s4->perimeter()!=15){
        passed = false;
    }
    s1->set_values(-5,-5);
    s2->set_values(-5,0);
    s3->set_values(-5,-5);
    s4->set_values(-5,0);
    if(s1->perimeter()>0){
        passed = false;
    }
    if(s2->perimeter()>0){
        passed = false;
    }
    if(s3->perimeter()>0){
        passed = false;
    }
    if(s4->perimeter()>0){
        passed = false;
    }
    if(passed){
        std::cout << "Perimeter functions passed." << std::endl;
    }
    else{
        std::cout << "Perimeter functions failed." << std::endl;
    }
    delete s1;
    delete s2;
    delete s3;
    delete s4;
}
#endif //TESTSHAPE_H