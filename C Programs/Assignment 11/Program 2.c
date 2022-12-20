//Sajal
//20238
//Program2
//Write a program to sort array in ascending and descending order by passing array to function.

#include<stdio.h>

void sort(int n, int terms[]){
	int a;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(terms[i]>terms[j]){
				a=terms[i];
				terms[i]=terms[j];
				terms[j]=a;
			}
		}
	}
	printf("The Ascending order for the array is : \n");
	for(int i=0;i<n;i++){
		printf("%d\n", terms[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(terms[i]<terms[j]){
				a=terms[i];
				terms[i]=terms[j];
				terms[j]=a;
			}
		}
	}
	printf("\n\nThe Descending order for the array is : \n");
	for(int i=0;i<n;i++){
		printf("%d\n", terms[i]);
	}
}
	
int main(){
	
	int n;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int terms[n];
	printf("Enter elements of the array-\n");
	for(int i=0;i<n;i++){
		printf("%d element : ", i+1);
		scanf("%d", &terms[i]);
	}
	sort(n,terms);
	return 0;
}
