#include <stdio.h>
struct student{
    char name[20];
    int roll_no;
    int telugu,english,maths,science,social,total,avg,rank;
};
void main(){
    int no,cnt=0;
    struct student s[5]={
    {"Priya",1,95,94,98,85,88,460,92,2},
    {"Chandu",2,96,95,95,95,92,473,95,1},
    {"Snehitha",3,95,94,92,85,88,454,91,3},
    {"Mounika",4,89,90,89,85,86,439,88,4},
    {"Pinki",5,85,82,79,85,87,418,84,5}
    };
    printf("Enter Student roll Number:");
    scanf("%d",&no);
    for(int i=0;i<4;i++){
    if(no==s[i].roll_no)
    {
        cnt++;
        printf("%s Marks:\n",s[i].name);
        printf("Telugu=%d\nEnglish=%d\nMaths=%d\nScience=%d\nSocial=%d\nTotal=%d\nAverage=%d\nRank=%d\n",s[i].telugu,s[i].english,s[i].maths,s[i].science,s[i].social,s[i].total,s[i].avg,s[i].rank);
    }
}
      if(cnt==0) 
      printf("Student not found");
}

