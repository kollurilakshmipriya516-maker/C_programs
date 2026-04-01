#include<stdio.h>
void main(){
int yr;
printf("year=");
scanf("%d",&yr);
if(yr%4==0){
	if(yr%100==0){
		if(yr%400==0)
		printf("leap yr");
		else printf("not a leap yr");
}          
else printf("leap yr");
}
else printf("Not a leap year");
}
