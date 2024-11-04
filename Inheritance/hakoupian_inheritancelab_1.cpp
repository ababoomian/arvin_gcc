//Arvin Hakoupian
//Inheritance 1
//CS/IS 135

#include <iostream>

class Animal
{
    public:
       virtual void sound() { std::cout << "Animal makes a sound.\n"; }
};

class Dog : public Animal
{
    public:
        void sound() override { std::cout << "Dog barks.\n"; }
        
};

int main()
{
    Animal a;
    a.sound();
    Dog myDog;
    myDog.sound();
}