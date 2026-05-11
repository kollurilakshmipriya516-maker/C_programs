#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
	FILE *fp;
	char words[100][20];
	int count=0;
	//open file
	fp=fopen("words.txt","r");
	if(fp==NULL){
		printf("Error opening file\n");
                return 1;
	}
	while(fscanf(fp,"%s",words[count])!=EOF){
		count++;
	}
	fclose(fp);
	srand(time(0));
	int index=rand()%count;
	char word[20];
	strcpy(word,words[index]);
        char guess[20];
	int length=strlen(word);
	int attempts=6;
	char letter;
	int i,correct;
	for(i=0;i<length;i++){
	guess[i]='_';
	}
	guess[length]='\0';
	printf("welcome to hangman game!\n");
	while(attempts>0){
		correct=0;
	        printf("\nword:%s",guess);
		printf("\n Enter a letter:");
		scanf(" %c",&letter);
		for(i=0;i<length;i++){
			if(word[i]==letter){
				guess[i]=letter;
				correct=1;
			}
		}
		if(!correct){
			attempts--;
			printf("Wrong guess!Attempts left:%d\n",attempts);
		}
		if(strcmp(word,guess)==0){
			printf("\n You guessed correct:%s\n",word);
			break;
		}
		}
		if(attempts==0){
			printf("\n Game Over!Word is:%s\n",word);
		}
	
		return 0;
}
