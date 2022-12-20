//Sajal
//20238
//Problem No. : 5

#include<stdio.h>

int main(){
	
	int q,p;
	printf("Enter the value of q : ");
	scanf("%d", &q);
	
	if(q<50){
		p = 2*q + 100 + q%10;
		printf("The value of p is : %d", p);
	}else if(q==50){
		p = 3*q + 100 - q%10;
		printf("The value of p is : %d", p);
	}else{
		p = 5*q + 100*(q%10); 
		printf("The value pf p is : %d", p);
	}
	return 0;
}
