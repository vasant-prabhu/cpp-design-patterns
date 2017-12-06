//toyfactory.cpp

#include<iostream>
#include<conio.h>
#include "factory-class-defs.cpp"

class ToyFactory
{
   public:
   static Toy* createToy(int type)
   {
      Toy *toy = NULL;
      switch (type)
      {
         case 1:
         toy =new Car;
         break;
         case 2:
         toy =new Plane;
         break;       
         default:
         cout<<"Bad case"<<std::endl;
         toy = NULL;
      }
      if (toy)
      {
       toy->AssembleToy();
       toy->TestToy();
      }
      return toy;  
   }
};

