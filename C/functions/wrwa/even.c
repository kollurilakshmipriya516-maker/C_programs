#include<stdio.h>
int eod(int a){
     if(a%2==0)
     return 0;
     else 
     return 1;
}
void main(int x){
        printf("enter x value");
        scanf("%d",&x);
        int z=eod(x);
	if(z==0)
        printf("%d is even",x);
	else
	printf("%d is odd",x);

}

