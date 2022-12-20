//Sum of series of Geometric Progression.
//Here firstly I have calculated the ratio constant which multiplies to 'a',i.e., 1, r, r^2, r^3, r^4, etc. then multiplies to a.
//The above process was done as to achieve below expression, which is, the sum of G.P. :
//a(1+r+r^2+r^3+r^4......+r^(n-1))

#include<iostream>

using namespace std;

int main(){
	
	float a,r,n,sum=0,sum_new=1;
	
	cout<<"Enter the first number of the geometric progresssion : ";
	cin>>a;
	cout<<"Enter the common ratio : ";
	cin>>r;
	cout<<"Enter the number of terms : ";
	cin>>n;
	
		for(float j=1;j<=n;j++){
			
			float ratio=1;
		
			for(float i=1;i<j;i++){
				
				ratio*=r;
			}
			
			sum+=ratio;
		}
			sum_new=sum*a;
		
	cout<<"The sum of the G.P. is "<<sum_new<<".";
	
return 0;
}
