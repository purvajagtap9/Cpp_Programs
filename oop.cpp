#include<iostream>
using namespace std;

class arithematic
{
    public:
        int no1;
        int no2;
    
        arithematic()  //default constructor
        {
            no1 = 0;
            no2 = 0;
        }

        arithematic(int value1, int value2)  //parametrised
        {
            no1 = value1;
            no2 = value2;
        }

        int addition()
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;

        }

        int substraction()
        {
            int ans = 0;
            ans = no1 - no2;
            return ans;
    
        }

};
int main()
{
    arithematic aobj(11,10);
    int result = 0;

    result = aobj.addition();
    cout<<"Addition is :"<<result<<"\n";

    result = aobj.substraction();
    cout<<"Substraction is :"<<result<<"\n";

    return 0;
}