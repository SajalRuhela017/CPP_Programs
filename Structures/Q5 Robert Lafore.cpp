//Q5 Robert Lafore

#include<iostream>

using namespace std;

struct date{
	int day;
	int month;
	int year;
};

int main(){
	
	int n;
	cout<<"Enter the number of dates you want to store : ";
	cin>>n;
	date D[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the day : ";
		cin>>D[i].day;
		cout<<"Enter the month : ";
		cin>>D[i].month;
		cout<<"Enter the year : ";
		cin>>D[i].year;
	}
	
	for(int j=0;j<n;j++){
		cout<<"The date "<<j+1<<" you entered is "<<D[j].day<<"/"<<D[j].month<<"/"<<D[j].year<<endl;
	}
	return 0;
}
