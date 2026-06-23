#include<stdio.h>
int eod(void);
void main(){
int x;
x=eod();
if(x==1)
	printf("even");
else 
	printf("Odd");
}
int eod(){
	int n;
	printf("enter a n=");
	scanf("%d",&n);
	if(n%2==0)
		return 1;
	else 
		return 0;
}

