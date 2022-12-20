//Q11 Robert Lafore

#include<iostream>

using namespace std;

struct time{
	int hours;
	int minutes;
	int seconds;
};

int main(){
	
	time T[2];
	long total;
	int H,M,S;
	cout<<"Enter the time in HH:MM:SS format -"<<endl;
	for(int i=0;i<2;i++){
		cout<<"Enter "<<i+1<<" time value-"<<endl<<"Enter hours : ";
		cin>>T[i].hours;
		cout<<"Enter minutes : ";
		cin>>T[i].minutes;
		cout<<"Enter seconds : ";
		cin>>T[i].seconds;
		total+=T[i].hours*3600+T[i].minutes*60+T[i].seconds;
	}
	H=total/3600;
	M=(total%3600)/60;
	S=total%60;
	cout<<"The sum of the above two time value is : "<<H<<":"<<M<<":"<<S;
	return 0;
}
