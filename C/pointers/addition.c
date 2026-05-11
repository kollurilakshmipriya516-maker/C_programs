#include<stdio.h>
void main(){
	int a=10,*p;
	p=&a;
	printf("a:%d\n",a);
        printf("address of a:%p\n",&a);
        printf("address of p:%p\n",p);
        printf("p:%d\n",*p);
	p=p+1;
	printf("After addition");
	printf("a:%d\n",a);
	printf("address of a:%p\n",&a);
	printf("address of p:%p\n",p);
	printf("after p:%d\n",*p);
}
