#include<stdio.h>
void main(){
        int a[10]={1,2,3,4,5},*p,i;
                p=&a[0];
        printf("array elements are:");
        printf("%d ",*p);
        for(i=1;i<5;i++){
        p=p+1;
	printf("%d ",*p);
	}
        printf("\narray elements after changing are:");
     	p=&a[0];
	printf("%d ",*p);
	p=p+1;
        *p=25;
	printf("%d ",*p);
	for(i=1;i<=3;i++){
        p=p+1;
        printf("%d ",*p);
        }
}
