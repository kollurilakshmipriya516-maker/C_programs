#include<stdio.h>
int arm(void);
void main(){
int s=arm();
if(s==0)
	printf("Armstrong");
else 
	printf("Not a Armstrong");
}
int arm(){
	int n,rem,rev=0,x;
	printf("enter a n");
	scanf("%d",&n);
	x=n;
	while(n>0){
        rem=n%10;
	rev+=rem*rem*rem;
	n/=10;
	}
	if(rev==x)
		return 0;
	else 
		return 1;
}
