//Sajal
//20238
//    *
//   **
//  ***
// ****
//*****

#include<stdio.h>

int main(){
	
	for(int i=1;i<=5;i++){
		int k=i;
		while(5-k>0){
			printf(" ");
			k++;
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
