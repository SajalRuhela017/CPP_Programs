//Sajal
//20238
//Problem No. : 3

#include<stdio.h>

int main(){
	
	int p;
	printf("Enter the integral value of p : ");
	scanf("%d", &p);
	
	if(p>0){
		printf("\nThe value of q is 1.");
	}else if(p<0){
		printf("\nThe value of q is -1.");
	}else{
		printf("\nThe value of q is 0.");
	}
	return 0;
}
