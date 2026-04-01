#include<stdio.h>
void main(){
int n;
printf("enter value of n= ");
scanf("%d",&n);
if((n&1)==0)
	printf("even");
else printf("Odd");
}
