#include<stdio.h>
void eod(){
	int n;
        printf("n=");
	scanf("%d",&n);
	if(n%2==0)
		printf("Even");
	else 
		printf("Odd");
}
void main(){
	eod();
}

