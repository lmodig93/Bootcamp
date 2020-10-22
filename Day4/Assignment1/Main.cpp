#include "Shape.h"

int main(){
    Shape *a[4]{
        new Rectangle,
        new Triangle,
        new Square,
        new Circle
    };
    a[0]->set_values(1,2);
    a[1]->set_values(2,2);
    a[2]->set_values(2, 0);
    a[3]->set_values(4, 0);
    std::cout << "The Rectangle is equal to the Triangle. ";
    if(*a[0]==*a[1]) std::cout << "True!" << std::endl;
    else std::cout << "False!" << std::endl;
    std::cout << "The Triangle is smaller than the Square. ";
    if(*a[1]<*a[2]) std::cout << "True!" << std::endl;
    else std::cout << "False!" << std::endl;
    std::cout << "The Square is larger than the Circle. ";
    if(*a[2]>*a[3]) std::cout << "True!" << std::endl;
    else std::cout << "False!" << std::endl;

    for(int i=0; i<4; i++){
        std::cout << "a[" << i << "]: Area = " << a[i]->area() << std::endl;
        std::cout << "a[" << i << "]: Perimeter = " << a[i]->perimeter() << std::endl;
        delete a[i];
    }
}