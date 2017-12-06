#include<iostream>
#include<conio.h>
using namespace std;
//Creating a pure abstract class

class Toy
{
protected:
int price;
string name;

public:
virtual void AssembleToy()=0;
virtual void TestToy()=0;
virtual void PriceOfToy()=0;
};

class Car:public Toy
{
   public:
   virtual void AssembleToy(){std::cout<<"Assembling a car"<<endl;}
   virtual void TestToy(){std::cout<<"test a car"<<endl;}
   
   virtual void PriceOfToy()
   {
   price=450;
   name="mercedes";
   std::cout<<"Price of car is "<<price<<" and car name is"<<name<<std::endl;
   }
};

class Plane:public Toy
{
public:
   virtual void AssembleToy(){std::cout<<"Assembling a plane"<<endl;}
   virtual void TestToy(){std::cout<<"test a plane"<<endl;}
   virtual void PriceOfToy()
   {
   price=4500;
   name="boeing";
   std::cout<<"Price of plane is "<<price<<" plane name is "<<name<<std::endl;
   }   
};

