//Sajal
//20238
//Problem No. : 1

#include<stdio.h>

int main(){
	
	int gross_sales,earnings;
	printf("Enter the gross sales done by the salesperson in last week : ");
	scanf("%d", &gross_sales);
	earnings = 500 + (9*gross_sales/100);
	printf("\nThe earnings for salesperson for last week is : %d", earnings);
	
	return 0;
}
