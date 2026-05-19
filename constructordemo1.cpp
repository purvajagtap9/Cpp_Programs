#include<iostream>
using namespace std;

//Encapsulation
class marvellous
{
   //Access specifer
   public:
   int no1,no2; //Characteristic

   marvellous()  //default constructor
   {
      cout<<"Inside Default Constructor\n";
      no1 = 0;
      no2 = 0;
      
   }

   marvellous(int a,int b)  //parametrized constructor
   {
      cout<<"Inside Parametrised Constructor\n";
      no1 = a;
      no2 = b;      
   }

   marvellous(marvellous &ref)  //copy constructor
   {
    cout<<"Inside Copy Constructor\n";
    no1= ref.no1;
    no2= ref.no2;
   }


   ~marvellous()  //destructor
   {
      cout<<"Inside Destructor\n";
    
   }

};

int main()
{
    cout<<"Inside Main\n";
    //Object creation -(Instance)
    //it is local 
    marvellous mobj1; // for default constructor
    marvellous mobj2(11,21); //for parametrised constructor 
    marvellous mobj3(mobj2); //for copy constructor

    cout<<"End of Main\n";
    return 0;
} //all destructors gets called