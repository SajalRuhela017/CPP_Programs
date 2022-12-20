//Sajal
//20238
//Write a program to find ascending and descending order order of an array

#include <stdio.h>

int main(){
 
    int i,j,a,n,b;
	printf("Enter the value of N \n");
    scanf("%d", &n);
    int number[n];
 	printf("Enter the numbers \n");
    for(i=0;i<n;i++){
        scanf("%d", &number[i]);
	}
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (number[i]>number[j]) {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
        }
    }
    printf("The numbers arranged in ascending order are : \n");
    for(i=0;i<n;i++){
	printf("%d\n", number[i]);
	}
	for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (number[i]<number[j]) {
                b=number[i];
                number[i]=number[j];
                number[j]=b;
            }
        }
    }
    printf("The numbers arranged in descensing order are : \n");
    for(i=0;i<n;i++){
	printf("%d\n", number[i]);
	}
	return 0;
}
