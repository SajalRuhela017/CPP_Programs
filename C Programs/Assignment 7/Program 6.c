//Sajal
//20238
//20 elements are entered by the user in an array, write a program to find how many are even, odd, positive or negative.

#include<stdio.h>

int main(){
	
	int odd=0,even=0,positive=0,negative=0,zero=0;
	int array[20];
	printf("Enter the elements of the array : ");
	for(int i=0;i<20;i++){
		scanf("%d", &array[i]);
	}
	for(int j=0;j<20;j++){
		if(array[j]%2==1 || array[j]%2==-1)
			odd++;
		if(array[j]%2==0)
			even++;
		if(array[j]>0)
			positive++;
		if(array[j]<0)
			negative++;
			if(array[j]==0)
			zero++;
	}
	printf("\nNumber of odd elements  : %d", odd);
	printf("\nNumber of even elements  : %d", even);
	printf("\nNumber of positive elements  : %d", positive);
	printf("\nNumber of negative elements  : %d", negative);
	printf("\nNumber of zero elements  : %d", zero);
	return 0;
}
