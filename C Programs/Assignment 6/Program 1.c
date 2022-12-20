/*Sajal
20238
Program 1
Write a program in to dispaly this pattern like right angled triangle
*
**
***
****
*****	*/

#include<stdio.h>

int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
