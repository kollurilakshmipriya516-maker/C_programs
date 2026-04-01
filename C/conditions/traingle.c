#include<stdio.h>
void main(){
int a,b,c;
printf("Enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c) printf("Equilateral Triangle");
else if(a==b || b==c ||c==a) printf("Isoceles");
else printf("Scalance");
}
