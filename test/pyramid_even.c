#include<stdio.h>
void main(){
int n,i,j,even=2;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("%d ",even);
		even+=2;
	}
	printf("\n");

}
}
