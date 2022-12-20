/*Sajal
20238
Program 4
Write a program in to dispaly this pattern like right angled triangle using numbers
1
12
123
1234
12345	*/

#include<stdio.h>

int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
