#include<stdio.h>
void main(){
	int a=5;
	long int b=10;
	printf("int=%d",a);
	printf("long int=%ld",b);
	printf("%zu",sizeof(a));
	printf("%zu",sizeof(b));
}
