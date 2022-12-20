//Sajal
//20238
//Program_1
//Write a program to traverse the elements of an array and find the sum of array elements using pointers.

#include <stdio.h>
 

void printArray(int* arr, int n){
	
    int i,sum=0,avg;
    printf("Array:\t");
    for (i = 0; i < n; i++) {
    	printf("%d\t", arr[i]);
        sum+=arr[i];
    }
    printf("\nThe sum of the array is %d", sum);
    avg=sum/n;
    printf("\nThe average of array is : %d", avg);
}
 

int main(){
	
    int arr[] = { 2, -1, 5, 6, 0, -3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
 
    return 0;
}
