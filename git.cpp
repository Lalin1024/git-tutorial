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

    void Breed()
    {
        std::cout<<"Labrador"<<std::endl;
    }

};

int main()
{
    Animal *obj=new Dog();
    Dog *obj2=dynamic_cast<Dog*>(obj);
    obj2->Breed();
}