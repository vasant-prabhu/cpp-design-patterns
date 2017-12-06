// Singleton pattern 

#include<iostream>
#include<conio.h>

class Logger
{
   private:
   static Logger *pInstance; //self referencing pointer
   Logger()
   {}
   ~Logger()
   {}
   //Also make copy constructor and assignment operator for this class 
   //private
   
   Logger(Logger const&){}
   
   Logger& operator=(Logger const&){}
      
   public:
   static Logger* useInstance();
   void openLogFile();
   
};

Logger* Logger::pInstance=NULL;


//This function should be under mutex for multithreaded applciations
Logger* Logger::useInstance()
{
   if(Logger::pInstance==NULL)  
   {
      Logger::pInstance=new Logger();
   }
   return pInstance;
}

void Logger::openLogFile()
{
std::cout<<"Open the log file"<<std::endl;
}

int main()
{
   using namespace std;
   Logger::useInstance()->openLogFile();
   

   getch();
   return 0;
}


