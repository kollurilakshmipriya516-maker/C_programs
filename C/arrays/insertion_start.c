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
        for(i=n;i>0;i--)
                a[i]=a[i-1];
                a[0]=10;
        printf("\ninsertion elememts\n");
        for(i=0;i<=n;i++)
        printf("%d ",a[i]);


}

