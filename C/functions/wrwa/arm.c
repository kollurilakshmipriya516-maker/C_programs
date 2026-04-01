#include<stdio.h>
int arm(int n){
        int rem,rev=0,x;
        x=n;
        while(n>0){
        rem=n%10;
        rev+=rem*rem*rem;
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
       int z=arm(y);
       if(z==1)
       printf("Not a Armstrong");
       else 
       printf("Armstrong");

}

     
