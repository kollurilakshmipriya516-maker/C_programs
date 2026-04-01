#include<stdio.h>
void pal(){
        int n,rem,rev=0,x;
        printf("enter a n");
        scanf("%d",&n);
        x=n;
        while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
        }
        if(rev==x)
        printf("Palindrome");
        else
                printf("Not a Palindrome");
}
void main(){
	pal();
}
