#include<iostream>
using namespace std;
class B
{
public:
	B()
	{
		b = 0;
	}
	virtual void Print()
	{
	   cout<<" b = "<<b<<endl;
	}

protected:
	      int b;
	   
};

class C : public B
{
public:
	   C()
	   {
		   c = 100;
	   }
	   virtual void Print()
	   {
			cout<<" c = "<<c<<endl;
	   }
	   virtual void Display()
	   {
			cout<<" My display func......"<<endl;
	   }	  
  
private:
	    int c;
};

main()
{
	C obj;
	void (**vt)() = *(void (***)())&obj;
	C* CPtr = &obj;
	CPtr->Print();
}
