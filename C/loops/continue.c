#include<stdio.h>
void main(){
int n,i;
printf("n=");
scanf("%d",&n);
for(i=0;i<=n;i++){
	if(i==3)
		continue;
		printf("%d\n",i);
}
}
