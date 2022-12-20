//Difference between while and do...while loop

#include<stdio.h>

int main(){
	
	int i=10,j=11;
	while(i<12){
		
		printf("Condition is checked before execution of loop.\n");
		i++;
	}do{
		
		printf("First loop is executed one time and then the condition is checked.\n");	
	}while(j<10);
	
	return 0;
}
