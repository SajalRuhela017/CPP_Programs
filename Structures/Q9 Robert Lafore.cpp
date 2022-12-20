//Q9 Robert Lafore

#include<iostream>

using namespace std;

struct time{
	int hours;
	int minutes;
	int seconds;
};

int main(){
	
	long total;
	time T;
	cout<<"Enter the time in HH:MM:SS format -"<<endl<<"Enter hours : ";
	cin>>T.hours;
	cout<<"Enter minutes : ";
	cin>>T.minutes;
	cout<<"Enter seconds : ";
	cin>>T.seconds;
	total=T.hours*3600+T.minutes*60+T.seconds;
	cout<<"The total number of seonds represented by this time value : "<<total;
	return 0;
}
