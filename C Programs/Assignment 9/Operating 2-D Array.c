//Sajal
//20238
//Program 1
//Write a program to perform matrix addition, subtraction and multiplication

#include<stdio.h>

int main(){
	
	int n,m,sno;
	printf("Enter the number of rows in the array : ");
	scanf("%d", &n);
	printf("Enter the number of columns in the array : ");
	scanf("%d", &m);
	
	int matrix1[m][n];
	int matrix2[m][n];
	
	printf("Enter values for first matrix -\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter the value at [%d][%d] index : ", i, j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("\nEnter values for second matrix -\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter the value at [%d][%d] index : ", i, j);
			scanf("%d", &matrix2[i][j]);
		}
	}
	printf("\nEnter the serial number of the operation you want to perform -\n1. Addition\n2. Subtraction\n3. Multiplication\n");
	scanf("%d", &sno);

	switch(sno){
		
		case 1 :
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					printf("%d\t", matrix1[i][j]+matrix2[i][j]);
				}
				printf("\n");
			}
		break;
		
		case 2 :
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					printf("%d\t", matrix1[i][j]-matrix2[i][j]);
				}
				printf("\n");
			}
		break;
		
		case 3 :
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					printf("%d\t", matrix1[i][j]*matrix2[i][j]);
				}
				printf("\n");
			}
		break;
		
		default : 
			printf("Please choose a correct option!");
	}
	
	return 0;
}
