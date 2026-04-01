#include<stdio.h>
int pal(int n){
        int rem,rev=0,x;
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
void main(){
        int y;
        printf("enter a y");
        scanf("%d",&y);
       int z= pal(y);
       if(z==0)
       printf("Palindrome");
       else
       printf("Not a Palindrome");

}


