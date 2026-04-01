#include<stdio.h>
void main(){
int marks;
printf("marks=");
scanf("%d",&marks);
if(marks>90) printf("A");
else if(marks>80) printf("B");
else if(marks>70) printf("C");
else if(marks>60) printf("D");
else if(marks>50) printf("E");
else printf("Fail");

}
