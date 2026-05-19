#include<iostream>
using namespace std;
class Base
{
    public :
         int i,j;  

         void fun()
         {cout<<"Inside Base Fun\n";}

         virtual void gun()
         {cout<<"Inside Base Gun\n";}

         virtual void sun()
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

         virtual void run()   //Definition
         {cout<<"Inside Derived Run\n";}

};//16 bytes 


int main()
{    
    Base *bp = new Derived();  //Upcasting
    bp->fun();  //base fun
    bp->gun();  //base gun
    bp->sun();  //derived sun
    //bp->run();  //error
    
    return 0;
}