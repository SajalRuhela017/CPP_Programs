//Sajal
//20238
//Porgram 3
//Program to store and displaying the array elements and then taking sum and average of it.

#include<stdio.h>

int main(){
	
	int n,sum=0;
	float avg;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int array[n];
	for(int i=0;i<n;i++){
		printf("Enter the value of %d element - ", i+1);
		scanf("%d", &array[i]);
	}
	printf("The sum of the elements of the array is : ");
	for(int i=0;i<n;i++){
		sum+=array[i];
	}
	printf("%d", sum);
	avg=sum/n;
	printf("\nThe average of these array elements is %f", avg);
	return 0;
}
