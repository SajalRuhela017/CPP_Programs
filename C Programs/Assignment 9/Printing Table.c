/*Sajal
20238
Program 6
Write a program to print the multiplication table as follows 
		1	2	3	4	5
1		1	2	3	4	5
2		2	4	6	8	10
3		3	6	9	12	15
4		4	8	12	16	20
5		5	10	15	20	25 */

#include<stdio.h>

int main(){
	int table[5][5];
	printf("In this program we will print a table in which elements will be the products of their row and column position.\n");
	printf("\t1\t2\t3\t4\t5\n");
	for(int i=0;i<5;i++){
		printf("%d\t", i+1);
		for(int j=0;j<5;j++){
			table[i][j]=(i+1)*(j+1);
			printf("%d\t", table[i][j]);
		}
		printf("\n");
	}
	return 0;
}
