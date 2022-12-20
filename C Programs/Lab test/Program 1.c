//Sajal
//20238
//Program 1

#include<stdio.h>
int main(){
	int a,b,c,sum,pro,small,greatest;
	float avg;
	printf("Enter three integers : ");
	scanf("%d %d %d", &a, &b, &c);
	sum=a+b+c;
	pro=a*b*c;
	avg=sum/3;
	printf("\nThe sum of these numbers is : %d", sum);
	printf("\nThe product of these numbers is : %d", pro);
	printf("\nThe average of these numbers is : %f", avg);
		if(a<b && a<c){	
        printf("\n%d is the smallest",a);}
    else if(b<c){
        printf("\n%d is the smallest",b);}
    else{
        printf("\n%d is the smallest",c);}
    if(a>b && a>c){
        printf("\n%d is largest", a);}
    else if(b>c){
        printf("\n%d is largest",b);}
    else{
        printf("\n%d is largest",c);}
	return 0;	}
