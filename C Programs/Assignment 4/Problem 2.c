//Sajal
//20238
//Problem No. : 2

#include<stdio.h>

int main(){
	
	int num;
	printf("Enter any integer value from 0 to 5 : ");
	scanf("%d", &num);
	
	if(num==0){
		printf("The entered number is ZERO.");
	}else if(num==1){
		printf("The entered number is ONE.");
	}else if(num==2){
		printf("The entered number is TWO.");
	}else if(num==3){
		printf("The entered number is THREE.");
	}else if(num==4){
		printf("The entered number is FOUR.");
	}else if(num==5){
		printf("The entered number is FIVE.");
	}else{
		printf("Enter correct value!!");
	}
	return 0;
}
