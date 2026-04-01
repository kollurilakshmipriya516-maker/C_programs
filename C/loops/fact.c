#include<stdio.h>
void main(){
	int n,fact=1,i;
	printf("num=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact*=i;	
	printf("%d",fact);
}
