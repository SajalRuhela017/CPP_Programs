#include<stdio.h>

int main(){
	
	int a=10,b=20,x,y;
	
	x=++a;
	y=b++;
	
	printf("%d %d %d", a, x);
	printf("\n%d %d %d", b, y);
	
	return 0;
}
