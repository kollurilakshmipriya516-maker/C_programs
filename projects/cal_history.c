#include <stdio.h>
void main(){
    float a,b,result,x[20];
    int op,cnt=0,i;
    char operation[20];
    printf("==========Calculator==========\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.History\n");
    printf("6.Exit\n");
    printf("==============================");
    do{
        printf("\nEnter your choice : ");
        scanf("%d",&op);
        switch(op){
            case 1:{
                printf("Addition\n");
                printf("Enter two numbers : ");
                scanf("%f%f",&a,&b);
                result=a+b;
                printf("%.0f\n",result);
                x[cnt]=result;
                operation[cnt]='+';
                cnt++;
                break;
            }
            case 2:{
                printf("Subtraction\n");
                printf("Enter two numbers : ");
                scanf("%f%f",&a,&b);
                result=a-b;
                printf("%.0f\n",result);
                x[cnt]=result;
                operation[cnt]='-';
                cnt++;
                break;
            }
            case 3:{
                printf("Multiplication\n");
                printf("Enter two numbers : ");
                scanf("%f%f",&a,&b);
                result=a*b;
                printf("%.0f\n",result);
                x[cnt]=result;
                operation[cnt]='*';
                cnt++;
                break;
            }
            case 4:{
                printf("Division\n");
                printf("Enter two numbers : ");
                scanf("%f%f",&a,&b);
                result=a/b;
                printf("%.0f\n",result);
                x[cnt]=result;
                operation[cnt]='/';
                cnt++;
                break;
            }
           case 5:{
	    if(cnt > 0){
    	        printf("History\n");
	        for(i = 0; i < cnt; i++){
                    printf("(%c) -----> result = %.0f\n", operation[i], x[i]);
        	}
   	 }	
   	 else{
              printf("No History Available\n");
       	 op = 6;   
   	 }
	    break;
	}
        case 6:{
              printf("Exit\n");
                break;
            }
            
            
        }
    }
    while(op!=6);
}
