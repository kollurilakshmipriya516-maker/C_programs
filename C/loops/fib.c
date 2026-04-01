#include<stdio.h>
void main(){
int f=0,s=1,c,i,n;
printf("num=");
scanf("%d",&n);
for(i=0;i<=n;i++){
c=f+s;
f=s;
s=c;
printf("%d ",c);
}
}
