#include<stdio.h>
void main(){
int n,a[20],i,x,y,s_max;
printf("enter n=");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
x=a[0];
for(i=0;i<n;i++){
if(a[i]>x)
        x=a[i];
}
s_max=0;
for(i=1;i<n;i++){
if(a[i]>s_max && a[i]<x)
s_max=a[i];
}


printf("second max=%d\n",s_max);
}

