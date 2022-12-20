#include<stdio.h>

int main(){
	
	int marks[5],max;
	for(int i=0;i<5;i++){
		printf("Enter the marks obtained by %d", i+1);
		printf(" student : ");
		scanf("%d", &marks[i]);
	}
	
	max=marks[0];
	for(int i=1;i<5;i++){
		if(max<marks[i]){
			max=marks[i];
		}
	}
	printf("The max value is : %d", max);
	return 0;
}
