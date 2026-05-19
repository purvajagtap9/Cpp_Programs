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
    Base *bp = NULL;

    bp = new Derived();  //upcasting 
    bp->fun();   // calls base fun
    bp->gun();   // calls base gun
    bp->sun();   //calls base sun
    //bp->run();   //ERROR 

    
    return 0;
}