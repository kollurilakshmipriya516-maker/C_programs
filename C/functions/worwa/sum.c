#include<stdio.h>
void sum(int x,int y){
//printf("enter x,y values");
//scanf("%d%d",&x,&y);
printf("sum=%d",x+y);
}
void main(){
	int a,b;
	printf("enter a,b values");
        scanf("%d%d",&a,&b);
 
	sum(a,b);
}
