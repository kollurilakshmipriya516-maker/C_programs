#include<stdio.h>
void main(){
int a,b;
printf("enter a,b values are ");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping a=%d\n b=%d",a,b);
}
