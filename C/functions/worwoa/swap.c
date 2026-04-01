#include<stdio.h>
void swap(){
	int a,b;
	printf("enter a values");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d b=%d",a,b);
}
void main(){
	swap();
}
