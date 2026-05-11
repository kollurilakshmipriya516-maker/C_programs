#include<stdio.h>
void main(){
	int a[10]={1,2,3,4,5},*p,i;
		p=&a[0];
	for(i=0;i<5;i++)
		printf("%d",a[i]);
	printf("\naddress of a:%p\n",p);
	printf("p:%d\n",*p);
	p=p+1;
	printf("after addition\n");
        printf("address of a:%p\n",p);
        printf("p:%d\n",*p);
}
