#include<stdio.h>
void main(){
        int n,p,i;
        printf("n=");
        scanf("%d",&n);
        for(i=1;i<=10;i++){
                p=n*i;
                printf("%d * %d = %d\n",n,i,p);
        }
}
     
