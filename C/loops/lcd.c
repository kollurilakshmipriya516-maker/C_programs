#include<stdio.h>
void main(){
int a,b,r,x,y;
printf("enter x,y values");
scanf("%d%d",&x,&y);
a=x;
b=y;
while(b){
	r=a%b;
	a=b;
	b=r;
}
printf("gcd %d Lcm %d",a,(x/a)*y);
}
