#include "shape.h"

int main(){


    Shape *circ1 = new Circle(5);
    Shape *circ2 =  new Circle(100);

    Shape *triang1 = new Triangle(2,23);
    Shape *triang2 = new Triangle(3,5);

    Shape *rectangle1 = new Rectangle(23,1);
    Shape *rectangle2 = new Rectangle(2,1);

    Shape *shapes [6] ={circ1,circ2,triang1,triang2,rectangle1,rectangle2};

    for (size_t i = 0; i < 6; i++) 
        for (size_t j = i + 1; j < 6; j++) {
            //std::cout << "Shape[" << i << "] = A, Shape[" << j << "] = B" << std::endl;
            Compare(*shapes[i], *shapes[j]);
        }    

    for(size_t i=0;i<6;i++)
        delete shapes[i];

    return 0;
} 