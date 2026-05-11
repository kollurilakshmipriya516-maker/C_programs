#include<stdio.h>
void main(){
	int a=10,b=30,*p,**q;
	p=&a;
	q=&p;
        printf("a:%d\n",a);
        printf("address of a:%p\n",&a);
        printf("address of a:%p\n",p);
        printf("address of a:%p\n",*q);
	printf("address of p:%p\n",q);
	printf("a:%d\n",*p);
	printf("a:%d\n",**q);
}

        


