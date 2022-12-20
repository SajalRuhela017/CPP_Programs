//Structure Robert Lafore Q.2

#include<iostream>

using namespace std;

struct point{
	int x;
	int y;
};
int main(){
	
	point p1,p2,p3;
	cout<<"Enter coordinates for first point : ";
	cin>>p1.x>>p1.y;
	cout<<"Enter coordinates for second point : ";
	cin>>p2.x>>p2.y;
	p3.x=p1.x+p2.x;
	p3.y=p1.y+p2.y;
	cout<<"("<<p1.x<<","<<p1.y<<")"<<endl<<"("<<p2.x<<","<<p2.y<<")"<<endl<<"("<<p3.x<<","<<p3.y<<")";
	return 0;
}
