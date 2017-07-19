#include<iostream>
using namespace  std;
class a
{
	private:
	int i;
	public:
	a(int x=0) //mandatory for //a res//;
	{
		i=x;
	}
	a operator + (a const &op) // const is not mandatory
	{
		a res;  // a(int x=0)// is mandatory
		res.i=i+op.i;
		cout<<"obj 1 is = "<<i<<endl;
		cout<<"obj 2 is = "<<op.i<<endl;
		//cout<<res.i<<endl;
		return res;
	}
	void print()
	{
		cout<<"output of obj3 = obj1+ obj2 is "<<i;
	}
	
};
int main()
{
	a obj(10),obj2(20);
	a obj3=obj + obj2;
	obj3.print();
}
