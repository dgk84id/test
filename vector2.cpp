#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> i = {1,2,3,4};
	cout<<i.size()<<endl;
	i.begin();
	cout<<*i.data()<<endl;
	i.push_back(5);
	cout<<i.size()<<endl;
	cout<<i[4];
	//cout<<*i.data();
}
