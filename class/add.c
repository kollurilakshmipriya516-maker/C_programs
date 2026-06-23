#include<stdio.h>
int add(int *x, int *y){
	*x=*x+*y;
	
}
void main(){
	int a,b,s;
	printf("Enter values");
	scanf("%d%d",&a,&b);
        s=add(&a,&b);
	printf("%d",a);
} 

	
