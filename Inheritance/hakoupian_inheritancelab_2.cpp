//Arvin Hakoupian
//Inheritance 2
//CS/IS 135

#include <iostream>
using namespace std;

class Shape{
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a triangle" << endl;
    }
};

int main()
{

    Circle circle;
    circle.draw();
    Rectangle rectangle;
    rectangle.draw();
    Triangle triangle;
    triangle.draw();

    return 0;
}