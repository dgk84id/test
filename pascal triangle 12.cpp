#include<iostream>
using namespace std;
int main()
{
  int counter1, counter2,n;
cin>>n;
n=n+n-1;
  if(n>1)
  {
  for ( counter1=n; counter1>=1; counter1=counter1-2)
     {
        for(counter2=1; counter2<=counter1; counter2++)
        cout<<counter2<<" ";
        cout<<endl;
     }   
  }
  else
  cout<<n;
}
