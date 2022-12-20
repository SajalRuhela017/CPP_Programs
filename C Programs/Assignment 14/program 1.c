// Sajal,  20238,  Program-1
// Write a program to understand the concept of structure and union.

#include<stdio.h>
#include<string.h>
struct employe{
    int id;
    int age;
    char name[50];
};
union student{
    int roll,age,Class;
    char name[50];
};
int main(){
    struct employe s1,s2;
    union student u1,u2;
    s1.id=23;
    s1.age=24;
    strcpy(s1.name,"Merrick");
    printf("Id of s1 employe is %d\n",s1.id);
    printf("Age of s1 employe is %d\n",s1.age);
    printf("Name of s1 employe is %s\n",s1.name);
    s2.id=24;
    printf("Id of s2 employe is %d\n",s2.id);
    s2.age=25;
    printf("Age of s2 employe is %d\n",s2.age);
    strcpy(s2.name,"Ghost");
    printf("Name of s2 employe is %s\n",s2.name);
    u1.roll=12;
    printf("\nRoll of u1 student is %d\n",u1.roll);
    u1.age=10;
    printf("Age of u1 student is %d\n",u1.age);
    u1.Class=6;
    printf("class of u1 student is %d\n",u1.Class);
    strcpy(u1.name,"Nikto");
    printf("Name of u1 student is %s\n",u1.name);
    u2.roll=28;
    printf("Roll of u2 student is %d\n",u2.roll);
    u2.age=11;
    printf("Age of u2 student is %d\n",u2.age);
    u2.Class=7;
    printf("class of u2 student is: %d\n",u2.Class);
    strcpy(u2.name,"Manta Ray");
    printf("Name of u2 student is: %s\n",u2.name);
    return 0;
}
