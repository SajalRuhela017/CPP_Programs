//Sajal
//20238
//Program 6
//Write a program to find the number of vowels, consonants, digits and white spaces present in the input string.

#include<stdio.h>
#include<string.h>

int main(){
	
	int vowel=0,consonents=0,digits=0,spaces=0,others=0;
	char S[200];
	printf("Enter any sentence : ");
	gets(S);
	for(int i=0;S[i]!='\0';i++){
		if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' || S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U'){
			vowel++;
		}else if(S[i]>='b' && S[i]<='z' || S[i]>='B' && S[i]<='Z'){
			consonents++;
		}else if(S[i]>=0 && S[i]<=9){
			digits++;
		}else if(S[i]=' '){
			spaces++;
		}else{
			others++;
		}
	}
	printf("Vowels=%d\nConsonents=%d\nDigits=%d\nWhite Spaces=%d\nOthers=%d", vowel, consonents, digits, spaces, others);
	return 0;
}
