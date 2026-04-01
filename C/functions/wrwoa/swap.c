#include<stdio.h>
int a,b;
int swap(void);
int main(){
swap();
return 0;
}

int swap(){
int a,b;
printf("enter a values ");
scanf("%d%d",&a,&b);
a+=b;
b=a-b;
a-=b;
printf("after swapping a=%d b=%d",a,b);
}
