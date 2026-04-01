#include<stdio.h>
void main(){
int a,b,c,d,e;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
printf("d=");
scanf("%d",&d);
printf("e=");
scanf("%d",&e);
a+=5;
b-=5;
c*=5;
d/=5;
e%=5;
printf("%d\n%d\n%d\n%d\n%d",a,b,c,d,e);
}
