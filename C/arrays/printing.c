#include<stdio.h>
void main(){
int n,i;
printf("n=");
scanf("%d",&n);
int a[n];
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("display array elements");
for(i=0;i<n;i++)
printf("%d ",a[i]);

}
