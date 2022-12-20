//BMI Calculation as per Department of Health and Human Services/National Institutes of Health

#include<stdio.h>

int main(){
	
	int hi,w;
	float BMI, hm;
	printf("Enter your Height (in inches) and weight (in kgs.) \n");
	scanf("%d %d", &hi, &w);
	hm = hi/39.37;		//Converted inches into meters
	BMI = w/(hm*hm);
	printf("Your BMI is : %f", BMI);
	if(BMI<18.5){
		printf("\n\nAccording to your BMI, you are UNDERWEIGHT.\n");
	}else if(BMI>=18.5 && BMI<=24.9){
		printf("\n\nAccording to your BMI, you are FIT.\n");
	}else if(BMI>24.9 && BMI<=29.9){
		printf("\n\nAccording to your BMI, you are OVERWEIGHT.\n");
	}else{
		printf("\n\nAccording to your BMI, you are OBESE.\n");
	}
	return 0;
}


