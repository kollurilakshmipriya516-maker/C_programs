#include<stdio.h>
void main(){
int a[10],b[10],c[10],i,n,m,x,j;
printf("n=");
scanf("%d",&n);
printf("m=");
scanf("%d",&m);
printf("Enter the array elements");
for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
printf("Enter the array elements");
for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
x=m+n;
for(int i=0;i<n;i++)
        c[i]=a[i];
for(int i=n,j=0;i<x,j<m;i++,j++)
        c[i]=b[j];
for(i=0;i<x;i++)
        printf("%d ",c[i]);


}

