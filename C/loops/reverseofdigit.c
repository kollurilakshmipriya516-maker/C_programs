#include<stdio.h>
void main(){
int n,rem,rev=0;
printf("n=");
scanf("%d",&n);
while(n>0){
rem=n%10;
rev=rev*10+rem;
n/=10;
}
printf("reverse=%d",rev);
}

