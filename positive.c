#include<stdio.h>
void main()
{
int n;
printf("enter the no:");
scanf("%d",&n);
if(n==0)
{
printf("Zero\n");
}
else if(n>=1)
{
printf("Positive\n");
}
else if(n<0)
{
printf("Negative\n");
}
  else
  {
    printf("Invalid Input\n");
  }
}
