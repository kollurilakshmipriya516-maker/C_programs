#include<stdio.h>
void main(){
int n,rem,rev=0,x;
printf("n=");
scanf("%d",&n);
x=n;
while(n>0){
rem=n%10;
rev=rev*10+rem;
n/=10;
}
if(x==rev)
printf("Palindrome");
else 
printf("Not a Palindrome");
}

