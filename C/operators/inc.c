#include<stdio.h>
void main(){
int a,b,c,d,e;
printf("a=");
scanf("%d",&a);
b=a++;
c=++a;
d=a--;
e=--a;
printf("%d\n%d\n%d\n%d\n",b,c,d,e);
}
