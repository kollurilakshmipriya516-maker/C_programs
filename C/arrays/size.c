#include<stdio.h>
void main(){
int a[5]={10,4,8,2,9};
printf("array=");
for(int i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
printf("size=%zu",sizeof(a));
}

