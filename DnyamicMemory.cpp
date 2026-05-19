#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    float *Marks = NULL;
    int i = 0;

    cout<<"Enter no. of elements : \n";
    cin>>size;

    //Dynamic Memory allocation
    Marks = new float[size];
    cout<<"Enter your marks :\n";

    //Iteration
    for(i =0;i<size;i++)
    {
        cin>>Marks[i];
    }
    cout<<"Entered marks are: \n";

//        1    2     3
    for(i =0;i<size;i++)
    {
        cout<<Marks[i]<<"\n";
    }

    delete [] Marks;

    return 0;


}
