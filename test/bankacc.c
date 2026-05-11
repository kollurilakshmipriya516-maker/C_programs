#include<stdio.h>
void main(){
	char name[20];
	int n,min,amount;
	printf("enter minimum balance:");
	scanf("%d",&min);
	printf("enter your choice:");
        scanf("%d",&n);
	if(min>500){
	switch(n){
		case 1:{
			       printf("Account creating\n");
			       printf("enter your name:");
			       scanf("%s",name);
			       printf("your account created successfully with a name of %s\n",name);
		              
		      
		      }
		       break;
		case 2:{
			       printf("Depositing\n");
                               printf("enter amount:");
                               scanf("%d",&amount);
                               printf("Money deposited successfully\n");
			       printf("Total balance is %d\n",min+amount);
		       }
		       break;
		case 3:{
			       printf("Withdraw\n");
                               printf("enter amount:");
                               scanf("%d",&amount);
			       if(amount<min){
                               printf("Money withdrawn successfully\n");
                               printf("Total balance is %d\n",min-amount);
			       }
			       else printf("Not enough money");
		       }
		       break;
	}
	}
		 else printf("You have to maintain minimum balance");
	}

		       
