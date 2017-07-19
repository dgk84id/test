#include<iostream>
using namespace std;
class Base
{
   public:
    virtual void DoOperation()
	 {
	 	cout<<"Base";
	 }
	 
};

class Derived: public Base
{
   public:
     void DoOperation(){ cout << "We did it!" << endl; }
};

main()
{
//...
Derived d;
   Base * pBase = new Derived();
   cout<<pBase<<endl;
   pBase->DoOperation(); //dynamic binding, uses virtual table lookup at run time..
//...
}

