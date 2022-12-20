//Sajal
//20238
//Program 5
//Write a program to find a trace of a matrix

#include<stdio.h>

int main(){
	
	int arr[4][4]={ {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
	int sum=0;
	printf("The array is : \n");
	for(int k=0;k<4;k++){
		for(int l=0;l<4;l++){
			printf("%d\t", arr[k][l]);
		}
		printf("\n");
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j)
				sum+=arr[i][j];
		}
	}
	printf("The trace of the matrix is : %d", sum);
	return 0;
}
