#include<iostream>
using namespace std;
int main()
{
  int counter1, counter2,n;
cin>>n;
  if(n>1)
  {
  for ( counter1=n; counter1>=1; counter1--)
     {
        for(counter2=counter1; counter2<=n; counter2++)
        {
        if(counter2==n)
        cout<<counter2;
        else
        cout<<counter2<<" ";
        }

        cout<<endl;
     }   
  }
  else
  cout<<n;
}

