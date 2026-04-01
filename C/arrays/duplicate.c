#include<stdio.h>
void main(){
int n,a[20],i,j;
printf("enter n=");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
 for(j=i+1;j<n;j++)
  if(a[i]==a[j]){
	  for(int k=j;k<n-1;k++)
    a[k]=a[k+1];
      j--;
      n--;

  }
}
printf("display array elements");
for(i=0;i<n;i++)
printf("%d ",a[i]);

}
