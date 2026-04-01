#include<stdio.h>
void main(){
        int n,fact=1,i;
        printf("num=");
        scanf("%d",&n);
        while(n>0){
        fact*=n;
        n--;
	}
        printf("%d",fact);
}

