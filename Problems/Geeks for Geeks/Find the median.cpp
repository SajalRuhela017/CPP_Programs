//GEEKS for GEEKS (Find the median)
//Given an array arr[] of N integers, calculate the median.
//You don't need to read or print anything.
//Your task is to complete the function find_median() which takes the array as input parameter and returns the floor value of the median.

//Expected Time Complexity: O(n * log(n))
//Expected Space Complexity: O(1)

//Constraints:
//1<=Length of Array<=100
//1<=Elements of Array<=100

#include<iostream>

using namespace std;

class median{
	public : 
		void sort(int *arr, int n){
			int a,b;
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(arr[i]>arr[j]){
						a=arr[i];
						arr[i]=arr[j];
						arr[j]=a;
					}
				}
			}
			if(n%2==1){
				a=(n-1)/2;
				cout<<arr[a];
			}else{
				a=n/2;
				b=(n-2)/2;
				cout<<arr[b]<<"\t"<<arr[a];
			}	
		}
};

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	median obj;
	obj.sort(arr, n);
	return 0;
}
