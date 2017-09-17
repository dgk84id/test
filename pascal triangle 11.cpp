#include<iostream>
using namespace std;
int main()
{
  int counter1, counter2,n,m;
cin>>n;
  if(n>1)
  {
  for ( counter1=n; counter1>=1; counter1--)
     {
         m=counter1;
        for(counter2=1; counter2<=n; counter2++)
        {
        if(counter2==n)
        cout<<n;
        else if(m<n)
        {
        cout<<m<<" ";
        m++;
        }
        else if(m==n)
        cout<<m<<" ";

        }

        cout<<endl;
     }   
  }
  else
  cout<<n;
}

