#include<stdio.h>
int swap(int a,int b){
	a=a+b;
	b=a-b;
        a=a-b;
	printf("x=%d y=%d",a,b);
     return 0;
}
void main(int x,int y){
        printf("enter x,y values");
        scanf("%d%d",&x,&y);
        swap(x,y);
       // printf("x=%d y=%d",x,y);

}

