#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape{
    protected:
        int width, height;
    public:
        void set_values(int a, int b);
        void print_values();
        bool operator<(Shape &shape);
        bool operator>(Shape &shape);
        bool operator==(Shape &shape);
        virtual int area() = 0;
        virtual int perimeter() = 0;
    private:
        friend class testShape;
};

class Rectangle: public Shape{
    public:
        int area();
        int perimeter();
};

class Triangle: public Shape{
    public:
        int area();
        int perimeter();
};

class Square: public Shape{
    public:
        int area();
        int perimeter();
};

class Circle: public Shape{
    public:
        int area();
        int perimeter();
};

#endif