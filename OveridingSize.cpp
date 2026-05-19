#include<iostream>
using namespace std;
class Base
{
    public :
         int i,j;  

         void fun()
         {cout<<"Inside Base Fun\n";}

         void gun()
         {cout<<"Inside Base Gun\n";}

         void sun()
         {cout<<"Inside Base Sun\n";}

};  //8 bytes
class Derived : public Base
{  
    public :
         int x,y; 
         
         void fun()  //redifinition
         {cout<<"Inside Derived Fun\n";}

         void sun()   //redifinition
         {cout<<"Inside Derived Sun\n";}  

         void run()   //Definition
         {cout<<"Inside Derived Run\n";}

};//16 bytes 


int main()
{     
    cout<<sizeof(Base)<<"\n";     //8 
    cout<<sizeof(Derived)<<"\n";  //16

    return 0;
}