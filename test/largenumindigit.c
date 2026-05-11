#include<stdio.h>
void main(){
int n,Max,rem;
printf("n=");
scanf("%d",&n);
Max=0;
while(n>0){
	rem=n%10;
	if(rem>Max)
		Max=rem;
	n/=10;
}
printf("max=%d",Max);
}
