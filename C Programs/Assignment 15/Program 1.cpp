//Sajal
//20238
//Program 1

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	FILE *p;
	p=fopen("NewFile.txt","w");
	if(p==NULL){
		printf("Nothing is Present.");
		getch();
		exit(0);
	}
	else{
		char c;
		c=getc(stdin);
		while(c!='\n'){
			fputc(c,p);
			c=fgetc(stdin);
		}
		fclose(p);
	}
	return 0;
}
