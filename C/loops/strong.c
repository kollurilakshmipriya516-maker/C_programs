#include<stdio.h>
void main(){
int num,x,sum=0,fact,rem;
printf("enter a num");
scanf("%d",&num);
x=num;
while(num>0){
	fact=1;
	rem=num%10;
	for(int i=1;i<=rem;i++)
		fact*=i;
	sum+=fact;
	num/=10;
}
if(x==sum)
printf("strong number");
else printf("not a strong number");
}
