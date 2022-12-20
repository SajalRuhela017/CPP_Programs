/*Sajal_20238_Problem 6*/

#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter the values of a, b and c : \n");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("(a<b) && (b<c)\t%d\n", (a<b) && (b<c));
	printf("(a<b) && (b>c)\t%d\n", (a<b) && (b>c));
	printf("(a>b) && (b<c)\t%d\n", (a>b) && (b<c));
	printf("(a>b) && (b>c)\t%d\n", (a>b) && (b>c));
	printf("(a<b) || (b<c)\t%d\n", (a<b) || (b<c));
	printf("(a<b) || (b>c)\t%d\n", (a<b) || (b>c));
	printf("(a>b) || (b<c)\t%d\n", (a>b) || (b<c));
	printf("(a>b) || (b>c)\t%d\n", (a>b) || (b>c));
	printf("(!(a>b))\t%d\n", (!(a>b)));
	printf("(!(a<b))\t%d\n", (!(a<b)));
	
	return 0;
}
