//Sum of n natural numbers 

#include<stdio.h>

 int main(){
 	
   int n,sum,i=1;
   
   printf("Enter any number upto which you want the sum : ");
   scanf("%d", &n);
   start:
   sum+=i;
   i++;
   if(i<=n) goto start;
   printf("The sum of natural numbers upto n is : %d\t",sum);
   
   return 0;
 }


