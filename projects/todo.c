#include<stdio.h>
#include<string.h>
char tasks[10][50];
int count=0;
void loadtasks(){
	FILE *fp=fopen("tasks.txt","r");
	if(fp==NULL)return;
	while(fscanf(fp," %[^\n]",tasks[count])!=EOF){
		count++;
	}
	fclose(fp);
}
void savetasks(){
	FILE *fp=fopen("tasks.txt","w");
	for(int i=0;i<count;i++){
		fprintf(fp,"%s\n",tasks[i]);
	}
	fclose(fp);
}
int main(){
	     int choice,i,num;
		loadtasks();
		while(1){
			printf("\n---TO-DO LIST---\n");
			printf("1.Add Task\n");
			printf("2.View Task\n");
			printf("3.Delete Task\n");
			printf("4.Update Task\n");
			printf("5.Exit\n");
			printf("Enter Choice:");
			scanf("%d",&choice);
			if(choice==1){
				if(count>=10){
					printf("Task list is full\n");
				}
				else{
					printf("Enter task:");
					scanf(" %[^\n]",tasks[count]);
					count++;
					savetasks();
				}
			}
			else if(choice==2){
				if(count==0){
					printf("No tasks available\n");
				}
				else {
					printf("\n Your tasks:\n");
					for(i=0;i<count;i++){
						printf("%d.%s\n",i+1,tasks[i]);
					}
				}
			}
			else if(choice==3){
				printf("Enter task number to delete");
				scanf("%d",&num);
				if(num<1||num>count){
					printf("Invalid number!\n");
				}
				else{
					for(i=num-1;i<count-1;i++){
						strcpy(tasks[i],tasks[i+1]);
					}
					count--;
					savetasks();
					printf("task deleted\n");
				}
			}
                       else if(choice==4){
                                printf("Enter task no to update:");
				scanf("%d",&num);
                                if(num<1||num>count){
                                        printf("Invalid number!\n");
                                }
				else{
				printf("Enter new task:");
				scanf(" %[^\n]",tasks[num-1]);
				savetasks();
				printf("Task updated\n");
                                }
                            }
			else if(choice==5){
				break;
			}
			else{
				printf("Invalid choice!\n");
                        }
	}
	
		return 0;

}
