#include<stdio.h>
void eod(int n){
	if(n%2==0)
		printf("even");
	else
		printf("odd");
}
void main(int x){
	printf("enter a value n=");
	scanf("%d",&x);
	eod(x);
}

