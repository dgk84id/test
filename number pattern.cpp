#include<stdio.h>

int main()
{
int i,j,k,N=3;
//i=N;
//j=N+1;
for(i=0;i<N;i++)
{
    for(j=0;j<N+1;j++)
    {
    	if(i%2==0)
    	{
    		if(j==N)
    		printf("%d",i+2);
    		else
			printf("%d",i+1);
		}
        else
        {
        	if(j==0)
        	printf("%d",i+2);
        	else
			printf("%d",i+1);
		}
    }
    printf("\n");
}
}

