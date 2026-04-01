#include<stdio.h>
void main(){
	int i=15;
	float f=2.5;
	char c='A';
	double d=2.0;
	printf("i=%d size=%zu\n",i,sizeof(i));
	printf("f=%f size=%zu\n",f,sizeof(f));
	printf("c=%c size=%zu\n",c,sizeof(c));
	printf("d=%lf size=%zu\n",d,sizeof(d));
}




