#include<stdio.h>
int sum(){
	int a,b;
	printf("enter a values");
	scanf("%d%d",&a,&b);
	return a+b;
}
void main(){
int x=sum();
	printf("%d",x);
}
