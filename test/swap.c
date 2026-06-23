#include<stdio.h>
int swap(int *,int *);
int main(){
	int a=10,b=5;
	swap(&a,&b);
	printf("%d %d",a,b);
}
int swap(int *x,int *y){
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
