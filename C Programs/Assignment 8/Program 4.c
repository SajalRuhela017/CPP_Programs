//Sajal
//20238
//*********
//**** ****
//***   ***
//**     **
//*       *

#include <stdio.h>

int main(){

	for(int i=1;i<=9;i++){
		printf("*");   	
	}
	printf("\n");
	for(int i=1;i<5;i++){
   		int space=2*i-1;
		for(int j=1;j<6-i;j++){
			printf("*");
		}
		for(int j=1;j<=space;j++){
			printf(" ");
		}	
		for(int j=1;j<6-i;j++){
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}
