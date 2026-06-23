#include<stdio.h>
void main(){
//	int * const p;
	int a=10,b=7;
	int * const p=&a;
	printf("%d\n",*p);
	printf("address=%p\n",p);
 	//p++;
	//p=&b;
       //printf("%d\n",*p);
      //printf("address=%p\n",p);//can't increment because of constant pointer(address constant)

}


