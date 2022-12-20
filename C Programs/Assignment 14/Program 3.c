// Sajal,  20238,  Program-3
// Write a program to store the information of three students and find the sum and average of students' marks using structure and union.

#include<stdio.h>
struct studentc{
    int roll;
    float marks;
};
union studentu{
    int roll;
    float marks;
};
int main(){
    struct studentc s1,s2,s3;
    s1.roll=1;
    s1.marks=16;
    s2.roll=2;
    s2.marks=17;
    s3.roll=3;
    s3.marks=18;
    float sum=s1.marks+s2.marks+s3.marks;
    printf("Sum of marks of all stdents : %.2f\n",sum);
    printf("Average of marks obtained is : %.2f\n",(sum)/3);

    union studentu su1,su2,su3;
    su1.roll=1;
    su1.marks=16;
    su2.roll=2;
    su2.marks=17;
    su3.roll=3;
    su3.marks=18;
    sum=su1.marks+su2.marks+su3.marks;
    printf("Sum of marks of all stdents using union is : %.2f\n",sum);
    printf("Average of marks obtained using union is : %.2f\n",(sum)/3);
    return 0;
}
