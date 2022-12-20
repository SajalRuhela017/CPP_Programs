//Sajal
//20238
//Program 3
//Write a program to find the sum of odd and even terms in an array.

#include<stdio.h>

int main(){
	
	int n,sum_odd=0,sum_even=0;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of the array : \n");
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int j=0;j<n;j++){
		if(arr[j]%2==1){
			sum_odd+=arr[j];
		}else{
			sum_even+=arr[j];
		}
	}
	printf("The sum of odd numbers in the array is : %d\n", sum_odd);
	printf("The sum of even numbers in the array is : %d\n", sum_even);
	
	return 0;
}
