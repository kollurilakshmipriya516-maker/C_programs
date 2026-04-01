#include<stdio.h>
void main(){
int n,x,rem,sum=0;
    printf("n=");
scanf("%d",&n);
x=n*n;
int y=x;
while(x>0){
	rem=x%10;
	sum+=rem;
	x/=10;
}
printf("sq=%d,sum=%d\n",y,sum);
if(sum==n)
	printf("NEON");
	else
	printf("Not a NEON");
	}

