//Binary search

#include<iostream>

using namespace std;

int BinarySort(int arr[], int l, int r,int n)
{
	while(l<=r)
	{
		int m=(l+r)/2;
		if(arr[m]==n)
			return m;
		if(arr[m]>n)
			r=m-1;
		else
			l=m+1;
	}
	return -1;
}

int main()
{	
	int arr[10]={2,4,7,9,13,17,32,54,71,89};
	cout<<"The array is : ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Enter the number you want to find : ";
	int n;
	cin>>n;
	int l=0;
	int r=n-1;
	int ans=BinarySort(arr,0,9,n);
	(ans==-1) ? cout<<"The number "<<n<<" is not in array."<<endl : cout<<"The number "<<n<<" is present at index : "<<ans<<endl;
	return 0;
}
