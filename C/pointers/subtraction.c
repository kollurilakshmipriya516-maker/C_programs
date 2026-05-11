#include<stdio.h>
void main(){
	int a=10,*p,b=5,*q;
	p=&a;
	q=&b;
	printf("%d\n",*p);
        p=p-1;
	printf("%d\n",*p);
 }
