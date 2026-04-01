#include<stdio.h>
int sum(int a,int b){
     return a+b;
}
void main(int x,int y){
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	int z=sum(x,y);
	printf("sum=%d",z);

}
