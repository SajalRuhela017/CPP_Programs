//We will enter a diagonal matrix and then we will store the diagonal elements in another 1-D array and then print them.

#include<iostream>

using namespace std;

int main(){
	
	int arr[4][4]={ {1,0,0,0}, {0,2,0,0}, {0,0,3,0}, {0,0,0,4} };
	int new_arr[4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				new_arr[i]=arr[i][j];
			}
		}
	}
	for(int k=0;k<4;k++){
		cout<<new_arr[k]<<endl;
	}
	return 0;
}
