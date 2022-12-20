//Sajal
//20238
//Program 7
//Write a program to sort the string in dictionay order.

#include<stdio.h>
#include<string.h>

int main(){
	
	char string[500][1000], temp[1000];
	int num,i=0,j=0;
	printf("Number of strings you want to enter : ");
	scanf("%d", &num);
	printf("Enter the strings - \n");
	for(i=0;i<=num;i++){
		gets(string[i]);
	}
	for(i=0;i<=num;i++){
		for(j=i+1;j<=num;j++){
			if(strcmp(string[i],string[j])>0){
				strcpy(temp,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],temp);
			}
		}
	}
	printf("The dictionary order of the string is :\n");
	for(i=0;i<=num;i++){
		puts(string[i]);
	}
	return 0;
}
