#include<stdio.h>
void main(){
        int a[10]={1,2,3,4,5},*p;
        p=&a[0];
  	printf("p:%d\n",*p);
        p++;
       	printf("p:%d\n",*p);
	++p;
	printf("after p:%d\n",*p);
	p=&a[0];
	printf("p:%d\n",*p++);
	p=&a[0];
	printf("p:%d\n",*++p);



}


