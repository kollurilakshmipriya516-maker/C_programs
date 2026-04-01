#include<stdio.h>
void main(){
        int a[10],cnt=0,i,n,odcnt=0;
        printf("n= ");
        scanf("%d",&n);
        printf("enter array elements\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("display array elements\n");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        for(i=0;i<n;i++){
               if(a[i]%2==0)
		       cnt++;
	      else 
		      odcnt++;
	}
        printf("\neven count=%d\n",cnt);
        
        printf("odd count=%d\n",odcnt);
}

