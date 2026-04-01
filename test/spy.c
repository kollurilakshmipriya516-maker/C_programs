#include<stdio.h>
void main(){
int n,rem,sum=0,prod=1;
    printf("n=");
    scanf("%d",&n);
    while(n!=0){
	rem=n%10;
	sum+=rem;
	prod*=rem;
	n/=10;
     }  
    printf("sum=%d prod=%d\n",sum,prod);
       if(sum==prod)
	printf("SPY");
	else
	printf("Not a SPY");
}
