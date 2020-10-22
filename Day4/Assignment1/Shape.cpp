#include "Shape.h"

void Shape::set_values(int a, int b){
    this->width = a;
    this->height = b;
}

void Shape::print_values(){
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
}

bool Shape::operator==(Shape &shape){
    if((this->area() == shape.area()) && (this->perimeter() == shape.perimeter())) return true;
    return false;
}

bool Shape::operator>(Shape &shape){
    if(this->area() > shape.area()) return true;
    else if(this->area() == shape.area()){
        if(this->perimeter() > shape.perimeter()) return true;
        else return false;
    }
    else return false;
}

bool Shape::operator<(Shape &shape){
    if(this->area() < shape.area()) return true;
    else if(this->area() == shape.area()){
        if(this->perimeter() < shape.perimeter()) return true; 
        else return false;
    }
    else return false;
}

int Rectangle::area(){
    return width*height;
}

int Rectangle::perimeter(){
    return width*2+height*2;
}

int Triangle::area(){
    return width*height/2;
}

int Triangle::perimeter(){
    return width*3;
}

int Square::area(){
    return width*width;
}

int Square::perimeter(){
    return width*4; 
}

int Circle::area(){
    return ((width/2)*(width/2))*3; //width = diameter
}

int Circle::perimeter(){
    return width*3; //width = diameter
}