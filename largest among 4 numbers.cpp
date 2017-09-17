#include<stdio.h>
int main( )
{
int a,b,c,d,small;

printf("enter value a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
//printf("enter the value of d");
//scanf("%d",&d);
//small=(a<b)?(a<c)?(a<d)?a:d:(c<d)?c:d:(b<c)?(b<d)?b:d:(c<d)?c:d;
small=a>b?a>c?a:c:b>c?b:c;
printf("smallest of the given 4 numbers is %d",small);

}

