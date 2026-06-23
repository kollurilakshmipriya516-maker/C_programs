#include<stdio.h>
int swap(int *x,int *y){
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main(){
	int a=5,b=10;
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
