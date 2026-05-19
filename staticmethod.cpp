#include<iostream>
using namespace std;
class demo
{

    public :
        int i;  //non static
        int j;  //non static
        static int k; //static

        demo()
        {
            i = 0;
            j = 0;
        }

        void fun()   //non static method 
        {
            cout<<"Inside Non Static Fun\n";
            cout<<"i:"<<i<<"\n";
            cout<<"j:"<<j<<"\n";
            cout<<"k:"<<k<<"\n";
        }

        static void gun()   //static method
        {
            cout<<"Inside Static Gun\n";
            cout<<"k:"<<k<<"\n";
        }




};

int demo:: k =11;

int main()
{
    cout<<demo::k<<"\n";
    demo::gun();

    demo dobj;

    cout<<dobj.i<<"\n";  //0
    cout<<dobj.j<<"\n";  //0

    dobj.fun();

    return 0;
}