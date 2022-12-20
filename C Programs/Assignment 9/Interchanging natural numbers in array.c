//Sajal
//20238
//Program 4
//Write a program take input in an array [1,2,3,4,5] and print this like [2,1,4,3,6,5]

#include<stdio.h>

int main(){
	
	int arr[6]={1,2,3,4,5,6};
	for(int i=0;i<6;i++){
		printf(" %d", (arr[i]%2==0)?(arr[i]-1):(arr[i]+1));
	}
	return 0;
}
