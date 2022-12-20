//Sajal
//20238
//Program 3
//Write a program to copy two strings and find the number of characters copied.

#include<stdio.h>
#include<string.h>

int main(){
	
	char a[5000], b[5000];
	printf("Enter first string : ");
	gets(a);
	strcpy(b,a);
	printf("\nThe copied string is : %s\n", b);
	printf("\nThe number of charcter copied are : %d\n", strlen(b));
	return 0;
}
