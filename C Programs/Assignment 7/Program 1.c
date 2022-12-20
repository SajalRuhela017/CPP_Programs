//Sajal
//20238
//Write a program to find greatest and smallest element in an array.

#include<stdio.h>

int main(){
	
	int n,min,max;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int array[n];
	printf("Enter the elements of array : ");
	for(int i=0;i<n;i++){
		scanf("%d", &array[i]);
	}
	max=array[0];
	for(int i=0;i<n;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
	min=array[0];
	for(int i=0;i<n;i++){
		if(min>array[i]){
			min=array[i];
		}
	}
	printf("The element having maximum value in the array is : %d", max);
	printf("\nThe element having minimum value in the array is : %d", min);
	return 0;
}
