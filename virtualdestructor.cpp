#include<iostream>
using namespace std;
class Base
{
	public:
		virtual ~Base()=0;
};
Base::~Base()
{
	cout<<"Base Destructor";
}
class Derived:public Base
{
	public:
		~Derived()
		{
			cout<<"Derived Destructor";
		}
};
int main()
{
	Derived d;
	//Base b;//Error due to the fact it is an abstract class
}
