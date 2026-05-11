#include<stdio.h>
void main(){
	int a=10,b=5;
	int *p,*q;
	p=&a;
	q=&b;
	printf("a : %d\n",a);
	printf("b : %d\n",b);
	printf("address of a : %p\n",&a);
        printf("address of b : %p\n",&b);
        printf("address of a using pointer : %p\n",p);
        printf("address of b using pointer : %p\n",q);
	printf("a using pointer : %d\n",*p);
        printf("b using pointer : %d\n",*q);
}






