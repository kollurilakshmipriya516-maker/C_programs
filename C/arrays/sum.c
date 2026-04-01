#include<stdio.h>
void main(){
	int a[10],sum=0,i,n,avg;
	printf("n= ");
	scanf("%d",&n);
        printf("enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("display array elements\n");
        for(i=0;i<n;i++)
        printf("%d  ",a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	printf("\nsum=%d\n",sum);
	avg=sum/n;
	printf("avg=%d\n",avg);
}
