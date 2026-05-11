#include<stdio.h>
void main(){
	int a=10,b=20,*p,*q;
	p=(&a,&b);// stores a address and discards then stores b address
	q=&a;
	printf("a:%d\n",a);
	printf("b:%d\n",b);
	printf("address of a:%p\n",&a);
	printf("address of b:%p\n",&b);
	printf("address of a:%p\n",q);
	printf("address of b:%p\n",p);
	printf("a:%d\n",*q);
	printf("b:%d\n",*p);
}
