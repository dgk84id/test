#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,a[100][100],count=0,r,c;
scanf("%d",&r);
scanf("%d",&c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
    scanf("%d",&a[i][j]);
    if(i==0||i==r-1||j==0||j==c-1)
    count=count+a[i][j];
}
printf("%d",count);
}



