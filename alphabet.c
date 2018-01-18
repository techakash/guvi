#include<stdio.h>
void main()
{
char c;
scanf("%c",&c);
int a=c;

if(a>=97&&a<=122||a>=65&&a<=90)
{
  printf("Alphabet");
}
else
{
printf("No");
}
}
