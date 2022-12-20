//Sajal
//20238
//Program 2
//Write a program to reverse the elements of the array

#include<stdio.h>

int main(){

	int n;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the element at [%d] index : ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe reverse of the array is : \n");
	for(int j=0;j<n;j++){
		printf("%d\n", arr[n-j-1]);
	}
	return 0;
}


