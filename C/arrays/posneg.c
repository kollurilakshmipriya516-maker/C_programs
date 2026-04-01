#include<stdio.h>
void main(){
        int a[10],cnt=0,i,n,odcnt=0,count=0;
        printf("n= ");
        scanf("%d",&n);
        printf("enter array elements");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("display array elements");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        for(i=0;i<n;i++){
               if(a[i]>0)
                       cnt++;
              else if(a[i]<0)
                      odcnt++;
	       else
		       count++;
        }
        printf("\npositve count=%d\n",cnt);
        printf("negative count=%d\n",odcnt);
	printf("Zero count=%d\n",count);
}


