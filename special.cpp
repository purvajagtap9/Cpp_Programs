#include<iostream>
using namespace  std;
class Demo
{
    public :
        int i;  //characteristics - memory milti
        float f; //characteristics

        Demo()    //constructor 
        {
            cout<<"Inside Construcor\n";
            i=0;
            f=0.0f;
        }

        ~Demo()   //destructor
        {
            cout<<"Inside Destructor\n";
        }

        void fun()  //memory milat nhi - behaviour
        {
            cout<<"Inside Fun\n";
        }
};

int main()
{
    cout<<"Inside Main\n";
    Demo dobj;    //object creation
    cout<<dobj.i<<"\n";      
    dobj.fun();
    cout<<"End of Main\n";
    return 0;
}
