#include <stdio.h>

int x = 100;   // Global variable
int main(){
	int y=20; //   local variable
        printf("local=%d\n",y);
	printf("global=%d\n",x);
	return 0;
}
