#include<stdio.h>
void swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
printf("After swapping a=%d b=%d",a,b);
}
void main(){
	int x,y;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	swap(x,y);
}
