#include<iostream>
using namespace std;

//Encapsulation
class marvellous
{
   //Access specifer (By default private)
   int no1,no2; //Characteristic

   void fun()  //Behvaiour
   {
    cout<<"Inside Fun\n";
   }

   void gun()
   {
    cout<<"Inside Gun\n";  //Behaviour
   }
};

int main()
{
    //Object creation -(Instance)
    marvellous mobj1;
    marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8
    cout<<mobj1.no1<<"\n"; //Error becoz no1 is private

    mobj1.fun();  //error becoz private
    mobj2.fun();  //error becoz private
 
    mobj1.gun();  //error becoz private
    

    return 0;
}