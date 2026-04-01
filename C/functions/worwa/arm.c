#include<stdio.h>
void arm(int n){
        int rem,rev=0,x;       
        x=n;
        while(n>0){
        rem=n%10;
        rev+=rem*rem*rem;
        n/=10;
        }
	if(rev==x)
         printf("Armstrong");
        else
         printf("Not a Armstrong");

}
void main(){
      int y;
        printf("enter a y");
        scanf("%d",&y);
        arm(y);
}

