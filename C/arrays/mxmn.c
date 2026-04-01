#include<stdio.h>
void main(){
int n,a[20],i,x,y;
printf("enter n=");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
x=a[0];
y=a[0];
for(i=0;i<n;i++){
if(a[i]>x)
	x=a[i];
if(a[i]<y)
	y=a[i];
}
printf("max=%d\n",x);
printf("min=%d\n",y);
}
