/*Sajal
20238
Program 2
Write a program in to dispaly this pattern like right angled triangle
*****
****
***
**
*	*/

#include<stdio.h>

int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
