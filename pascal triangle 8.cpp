#include<iostream>
using namespace std;
int main()
{
  int counter1, counter2,n,sum=1;
cin>>n;

  if(n>1)
  {
  for ( counter1=1; counter1<=n; counter1++)
     {
         if(counter1%2==0)
        sum=0;
        else
         sum=1;
        for(counter2=1; counter2<=counter1; counter2++)
        {
        
        if(counter2==counter1)
        cout<<sum;
        else if(sum==1)
        {
        cout<<sum<<" ";
        sum--;
        }
        else if(sum==0)
        {
        cout<<sum<<" ";
        sum++;
        }
            
        }

        cout<<endl;
     }   
  }
  else
  cout<<n;
}

