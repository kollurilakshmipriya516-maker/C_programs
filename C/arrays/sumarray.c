#include<stdio.h>
void main(){
int n,a[20],i,sum=0,avg;
printf("enter n=");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum+=a[i];
avg=sum/n;
printf("sum=%d\n",sum);
printf("avg=%d\n",avg);
}
