#include<stdio.h>
int inc(int *);
int main(){
	int a=10;
	inc(&a);
	printf("%d",a);
}
int inc(int *p){
	(*p)++;
}

