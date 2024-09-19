#include <iostream>
using namespace std;

class Animal

{

public:

    // constructor of the base class

    Animal()

    {

        cout << "I am an animal"<<endl<<endl;

    }

};

 // derived class

class Dog: public Animal
{

};
 // derived class

class Pig: public Animal
{

};
 // derived class

class Cat: public Animal
{

};
int main()
{
    // create object of the child class
    Dog obj1;
    Pig pbj2;
    Cat obj3;
}

