#include<stdio.h>
void main(){
        int a[10],i,n,pos;
        printf("n= ");
        scanf("%d",&n);
	printf("enter pos=");
	scanf("%d",&pos);
        printf("enter array elements\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("display array elements\n");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        for(i=n;i>pos;i--)
		a[i]=a[i-1];
		a[pos]=10;
	printf("\ninsertion elememts\n");
        for(i=0;i<=n;i++)
        printf("%d ",a[i]);


}


