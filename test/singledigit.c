#include<stdio.h>
void main(){
	int n,rem,res;
	printf("Enter n:");
	scanf("%d",&n);
	while(n>9){
		res=0;
		while(n>0){
			rem=n%10;
			res+=rem;
			n/=10;
		}
	n=res;
	}
	printf("%d",n);
}

