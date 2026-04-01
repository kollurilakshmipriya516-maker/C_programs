#include<stdio.h>
void main(){
int x,y,add,sub,mul,div,mod;
printf("enter the values of x and y");
scanf("%d%d",&x,&y);
add=x+y;
sub=x-y;
mul=x*y;
div=x/y;
mod=x%y;
printf("add=%d sub=%d mul=%d div=%d mod=%d ",add,sub,mul,div,mod);
}
