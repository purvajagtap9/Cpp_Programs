#include<iostream>
using namespace  std;
class Demo
{
    public :
        int i;  //characteristics - memory milti
        float f; //characteristics

        void fun()  //memory milat nhi - behaviour
        {
            cout<<"Inside Fun\n";
        }
};

int main()
{
    Demo dobj;
    cout<<dobj.i<<"\n";
    dobj.fun();
    return 0;
}
