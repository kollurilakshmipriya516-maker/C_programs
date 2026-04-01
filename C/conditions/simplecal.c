#include<stdio.h>
void main(){
        char op;
        int a,b;
        printf("enter a(op)b values");
        scanf("%d%c%d",&a,&op,&b);
        switch(op){
                case '+':
                        printf("%d",a+b);
                        break;
                case '-':
                        printf("%d",a-b);
                        break;
                case '*':
                        printf("%d",a*b);
                        break;
                case '%':
                        printf("%d",a%b);
                        break;
               default:
                        printf("Invalid");
                        break;
        }
}


