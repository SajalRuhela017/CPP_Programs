//Sajal
//20238
//Program 3

#include <stdio.h>

int main(){
	
    int a,b,c,d,e,bal;

    printf("Enter the Account number : ");
    scanf("%d",&a);
    printf("Enter the Beginning Balance: ");
    scanf("%d",&b);
    printf("Enter Total Charges: ");
    scanf("%d",&c);
    printf("Enter Total Credits: ");
    scanf("%d",&d);
    printf("Enter the Credit Limit: ");
    scanf("%d",&e);
    bal=b+c-d;
    printf("Account : %d", a);
    printf("\nCredit Limit : %d", e);
    printf("\nBalance : %d", bal);
	    if(bal>e){
	    printf("\nCredit Limit is EXCEEDED!!\n");
		}
    	else{
    	printf("\nCredit Limit is NOT EXCEEDED!!\n");
    	}
    	
    return 0;
}
