//illustration of continue statement

#include <stdio.h>
  
int main(){
    
    for (int i=1;i<=5;i++){ 
        if(i==2){
            continue;
        }else{
            printf("Hello User %d", i);
			printf(".\n"); 
    	}
	}
    return 0; 
}
