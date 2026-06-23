#include<stdio.h>
int arm(void);
void main(){
int s=arm();
if(s==0)
        printf("Palindrome");
else
        printf("Not a Palindrome");
}
int arm(){
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
                return 0;
        else
                return 1;
}

