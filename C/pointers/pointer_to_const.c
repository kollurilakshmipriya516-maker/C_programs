 #include<stdio.h>
void main(){
int const *p,a=10;
p=&a;
printf("%d\n",*p);
printf("address=%p\n",p);
//(*p)++;
//printf("%d\n",*p);//can't increment because of ponter to constant(value constant)
//printf("address=%p\n",p);
}
