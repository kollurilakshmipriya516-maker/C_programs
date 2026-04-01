#include<stdio.h>
void main(){
int n,i,sum=0,cnt=0;
    printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++){
	if(n%i==0){
	cnt++;
	sum+=i;
}
}
printf("sum=%d cnt=%d",sum,cnt);
}
