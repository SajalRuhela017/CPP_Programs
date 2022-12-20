//Sajal
//20238
//    *
//   ***
//  *****
// *******
//*********

#include<stdio.h>

int main(){
	
	for(int i=1;i<=9;i+=2){
		int k=(9-i)/2;
		while(k>0){
			printf(" ");
			k--;
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
