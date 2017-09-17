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
         sum=1;
        for(counter2=1; counter2<=counter1; counter2++)
        {
        
        if(counter2==counter1)
        cout<<sum;
        else 
        {
            if(sum==0)
            {
                cout<<sum<<" ";
                sum=1;
            }
            else
                {
                cout<<sum<<" ";
                sum=0;
                }
        
        
        }
        }   
        cout<<endl;
  }
  }
  else
  cout<<n;
}

