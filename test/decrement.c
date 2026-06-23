#include<stdio.h>
int inc(int *);
int main(){
   	int a=10;
        inc(&a);
        printf("%d",a);
}
int inc(int *p){
        (*p)--;
}


/*
#include<stdio.h>
int inc(int *);
int main(){
        int a=10,s;
       s=inc(&a);
        printf("%d",s);
}
int inc(int *p){
	int x;
       x=*p;
       return x-1;
}
*/
