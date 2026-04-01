#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if(a>b) printf("a is big");
else if (b>c) printf("b is big");
else printf("c is big");
}
