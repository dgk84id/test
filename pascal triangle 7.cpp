#include<iostream>
using namespace std;
int main()
{
  int counter1, counter2,n,sum=0;
cin>>n;

  if(n>1)
  {
  for ( counter1=1; counter1<=n; counter1++)
     {
        for(counter2=1; counter2<=counter1; counter2++)
        {
            sum++;
        if(counter2==counter1)
        cout<<sum;
        else
        cout<<sum<<" ";
        }

        cout<<endl;
     }   
  }
  else
  cout<<n;
}

