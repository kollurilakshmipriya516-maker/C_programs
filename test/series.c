#include<stdio.h>
void main(){
int n,sum=0,i,x;
    printf("n=");
    scanf("%d",&n);
    printf("x=");
    scanf("%d",&x);
    for(i=1;i<n;i++){
	    printf("%d ",x);
	    x+=10;
            sum+=x;
	   // printf("%d",x);
    }
    printf("%d\n",x);
    printf("sum=%d",sum+10);
}
