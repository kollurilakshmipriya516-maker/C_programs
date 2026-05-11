#include<stdio.h>
void main(){
        int a[10]={1,2,3,4,5},*p,*q,d;
        p=&a[0];
        q=&a[3];
	d=p-q;
	printf("p:%d\n",*p);
        printf("q:%d\n",*q);
	printf("d:%d\n",d);
 	printf("address of a:%p\n",p);
	printf("address of b:%p\n",q);
	printf("address of p :%p\n",&p);
	printf("address of q:%p\n",&q);
	p=p-2;
	printf("p:%d\n",*p);
	q=q-2;
	printf("q:%d\n",*q);

}


