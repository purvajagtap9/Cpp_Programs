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


};

int demo:: k =11;

int main()
{
    demo dobj;
    cout<<demo::k<<"\n"; //11

    cout<<dobj.i<<"\n";  //0
    cout<<dobj.j<<"\n";  //0

    return 0;
}