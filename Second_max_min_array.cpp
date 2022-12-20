//Second largest and second smallest number in array.

#include<iostream>

using namespace std;

int main(){
	
	int size,max,min,new_max,new_min;
	
	cout<<"Enter the size of array : ";
	cin>>size;
	int array[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" number ";
			cin>>array[i];
		}
		
		if(array[0]>array[1]){
			max=array[0];
			new_max=array[1];
		}else{
			max=array[1];
			new_max=array[0];
		}
		
		if(array[0]<array[1]){
			min=array[0];
			new_min=array[1];
		}else{
			min=array[1];
			new_min=array[0];
		}
	

	
		for(int i=2;i<size;i++){
			
			if(max<array[i]){
				new_max=max;
				max=array[i];
			}else if(new_max<array[i]){
				new_max=array[i];
			}
		}
			
		for(int i=2;i<size;i++){
			
				if(min>array[i]){
					new_min=min;
					min=array[i];
				}else if(new_min>array[i]){
					new_min=array[i];
				}
		}
	
		
	cout<<"The second largest number in array is : "<<new_max<<endl;
	cout<<"The second smallest number in array is : "<<new_min<<endl;
			
	
return 0;
}
