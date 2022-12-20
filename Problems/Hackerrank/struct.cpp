#include<iostream>

using namespace std;

struct student{
    int age;
    char first_name[51];
    char last_name[51];
    int standard;
};

int main(){
    
    student s1;
    cin>>s1.age>>s1.first_name>>s1.last_name>>s1.standard;
    cout<<s1.age<<" "<<s1.first_name<<" "<<s1.last_name<<" "<<s1.standard;
    return 0;
}
