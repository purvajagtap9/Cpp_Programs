//Polymorphism
#include<iostream>
using namespace std;

class hello
{
   public :
       int addition(int a,int b)
       {
        return a+b;
       }

       int addition(int a,int b,int c)
       {
        return a+b+c;
       }

       int addition(int a,int b,int c,int d)
       {
        return a+b+c+d;
       }
};
int main()
{
    hello hobj;

    cout<<hobj.addition(10,20)<<"\n";
    cout<<hobj.addition(10,20,30)<<"\n";
    cout<<hobj.addition(10,20,30,40)<<"\n";
    
    return 0;
}

