//syntax:int (*fun) (int,int)
#include<stdio.h>
int (*fun)(int);
int inc(int);
int main(){
	int a=10,s;
	s=int (*fun)(int a);
	fun=inc;
	printf("%d",s);
}
int inc(int x){
	return x++;
}
