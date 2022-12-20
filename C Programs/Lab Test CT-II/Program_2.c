//Sajal
//20238
//Program_2
//Write a program to display only prime numbers in an integer array.

#include<stdio.h>

int prime(int);
int main()
{
     int a[100],n;
     printf("Enter size of array : ");
     scanf("%d",&n);
     printf("Enter elements of Array :",n);
        for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
		}
    printf("Prime Numbers are : \n");
       for(int i=0;i<n;i++){
          if(prime(a[i])){
             printf(" %d, ",a[i]);    
          }
       }
       return 0;
}

int prime(int n){
       int i;
       if(n==1){
            return 0;
       }
       for(i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
       }
        
        return 1;
}

