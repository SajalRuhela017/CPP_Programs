//Find the Median
//After sorting the array middle element is the median.

#include<iostream>

using namespace std;

class median{
	
	public :
		int sort(int *ele, int n){
			int a,b;
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(ele[i]>ele[j]){
						a=ele[i];
			            ele[i]=ele[j];
		                ele[j]=a;
					}
				}
			}
			cout<<"The sorted array is -\n";
			for(int i=0;i<n;i++){
				cout<<ele[i]<<endl;
			}
			cout<<"\nSo, the median will be : ";
			if(n%2==1){
				a=ele[(n-1)/2];
				cout<<a;
			}else{
				a=ele[n/2];
				b=ele[(n-2)/2];
				cout<<a<<"\t"<<b;
			}
		}
};
		
int main(){
	
	int n;
	median M;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int ele[n];
	cout<<"Enter the elements of the array -\n";
	for(int i=0;i<n;i++){
		cout<<i+1<<" element : ";
		cin>>ele[i];
	}
	M.sort(ele,n);
	return 0;
}
