//Factory design pattern

#include<iostream>
#include<conio.h>

#include "toyfactory.cpp"

int main()
{
   using namespace std;
   int type;
   while(1)
   {
      cout<<"Please enter type of toy "<<endl;
      cin>>type;
      
      Toy *mytoy=ToyFactory::createToy(type);
      if(mytoy)
      mytoy->PriceOfToy();
   }
   getch();
   return 0;
}


