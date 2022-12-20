// Sajal,  20238,  Program-2
// Write a program to store the information of one student using structure and union.

#include<stdio.h>
#include<string.h>

struct students{
    int roll,age,class;
    char name[50];
};

union studentu{
    int roll,age,class;
    char name[50];
};

int main(){
	
    struct students s;
    s.roll=1;
    s.age=16;
    s.class=11;
    strcpy(s.name,"Alex");
    printf("The details of student stored in Sructure -\n");
    printf("Name of student is : %s\n",s.name);
    printf("Roll of student is : %d\n", s.roll);
    printf("Age of student is : %d\n", s.age);
    printf("class of student is : %d\n", s.class);
    union studentu u;
    printf("\nThe details of student stored in Union -\n");
    strcpy(u.name,"Zero");
    printf("Name of student is : %s\n", u.name);
    u.roll=55;
    printf("Roll of student is : %d\n", u.roll);
    u.age=17;
    printf("Age of student is : %d\n", u.age);
    u.class=12;
    printf("Class of student is : %d\n", u.class);
    return 0;
}
