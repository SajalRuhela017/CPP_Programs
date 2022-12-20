#include<iostream>

using namespace std;

class triangle{
	public :
		int a;
		int b;
		int c;
		void perimeter(int a, int b, int c){
			cout<<"The perimeter of the Trianlgle is : "<<a+b+c;
		}
};

int main(){
	triangle t;
	cout<<"Enter sides of triangle-"<<endl;
	cin>>t.a>>t.b>>t.c;
	t.perimeter(t);
}
