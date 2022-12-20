//Sajal
//20238
//Program_3
//Star Pattern

#include<stdio.h>

int main(){

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==5)
            {
                printf("*");
            }
            else
            {
            	printf(" ");                
            }
        }
        printf("\n");
    }
    return 0;
}
