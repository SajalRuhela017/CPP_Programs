//Divisiblity test by 3 and 4

#include<stdio.h>

int main(){
	
	int num;
	printf("Enter a number which you want to check for its divisiblity by 3 and 4 : ");
	scanf("%d", &num);
	
	if(num%4==0 && num%3==0){
		printf("\nThe entered number is divisible by 3 and 4 both.");
	}else if(num%4==0 && num%3!=0){
		printf("\nEntered number is only divisible by 4 and not by 3.");
	}else if(num%4!=0 && num%3==0){
		printf("\nEntered number is only divisible by 3 but not by 4.");
	}else{
		printf("\nEntered value is neither divisible by 3 nor by 4.");
	}
	return 0;
}
