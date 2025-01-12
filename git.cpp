#include<iostream>
class Animal
{
    public:
    virtual void sound()
    {
        std::cout<<"It makes sound"<<std::endl;
    }
};

class Dog:public Animal
{
    public:
    void sound() override
    {
       std::cout<<"It barks"<<std::endl; 
    }

    virtual void Breed()
    {
        std::cout<<"Labrador"<<std::endl;
    }

};

class Lion:public Animal
{
    public:
    void sound() override
    {
        std::cout<<"It roars"<<std::endl;
    }
    void power()
    {
        std::cout<<"It is powerful"<<std::endl;
    }
};

void selector(Animal *obj)
{
    obj->sound();
}

int main()
{
    Dog d;
    Lion l;
    selector(&d);
    selector(&l);
}