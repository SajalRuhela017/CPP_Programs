//Sajal
//20238
//Program 5
//s1, s2, s3 are three string variables. Write a program to read two strings constants into s1 and s2
//and compare whether they are equal or not. If they are not equal then join them together. Then
//copy the contents of s1 to s3. Print the contents of s1, s2 and s3 and find their lengths also.

#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[1000],s2[1000],s3[1000];
	int cncl;
	printf("Enter first string : ");
	gets(s1);
	printf("Enter second string : ");
	gets(s2);
	cncl=strcmp(s1,s2);
	if(cncl!=0){
		printf("The strings s1 and s2 are not equal.\n");
		strcat(s1,s2);
	}else{
		printf("The strings s1 and s2 are equal.\n");
	}
	strcpy(s3,s1);
	printf("String 1 : %s\nString 2 : %s\nString 3 : %s\n", s1,s2,s3);
	printf("Length s1 : %d\nLength s2 : %d\nLength s3 : %d\n", strlen(s1), strlen(s2), strlen(s3));
	return 0;
	}
