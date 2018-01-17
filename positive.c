#include<stdio.h>
void main()
{
int n;
printf("enter the no:");
scanf("%d",&n);
if(n==0)
{
printf("Zero");
}
else if(n>=1)
{
printf("Positive");
}
else
{
printf("Negative");
}
}
