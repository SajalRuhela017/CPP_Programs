//Sajal
//20238
//Program_6
//Write a program to swap two numbers using call by value and call by reference.

#include<stdio.h>  

void change(int num){    
    printf("Before adding value inside function num = %d \n",num);    
    num+=100;    
    printf("After adding value inside function num = %d \n", num);    
}    

int main(){   

    int x=100;    
    printf("Before function call x = %d \n", x);    
    change(x);							    
    printf("After function call x = %d \n", x);    
return 0;  
}    
