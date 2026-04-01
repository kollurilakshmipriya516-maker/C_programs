#include<stdio.h>
void main(){
        int a[10],i,n;
        printf("n= ");
        scanf("%d",&n);
    
     
        printf("enter array elements\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("display array elements\n");
        for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	a[n]=10;
	printf("display insertion array elements\n");
        for(i=0;i<=n;i++)
        printf("%d ",a[i]);

}
