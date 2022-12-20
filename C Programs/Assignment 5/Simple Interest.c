//Calculation of Simple Interest for three sets of p,n and r.

#include<stdio.h>

int main(){
	
	int i=1;
	while(i<=3){
		
		int p,n,r;
		float SI;
		printf("\nEnter the value of p, n, r \n");
		scanf("%d%d%d",&p,&n,&r);
		
		SI=p*n*r/100;
		printf("The simple interest is : %f", SI);
		i++;
	}
	return 0;
}
