#include<stdio.h>
void main(){
        int a[10]={1,2,3,4,5},*p,i;
                p=&a[0];
        printf("before:");
	p=p+3;
        printf("%d\n",*p);
        *p=30;
        printf("after:");
	printf("%d ",*p);



}
