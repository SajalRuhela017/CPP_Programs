#include <stdio.h>

int main()

{  

  int number_of_elephant_seals,elephant_seals[100],

       average_weight,sum=0,i;

   printf("Enter the number of elephants seals: ");

   scanf("%d",&number_of_elephant_seals);

   printf("\nEnter the weights of the %d elephant seals:\n",number_of_elephant_seals);

   for(i=1;i<=number_of_elephant_seals;i++)

   {

   scanf("%d",&elephant_seals[i]);

   }

   for(i=1;i<=number_of_elephant_seals;i++)

   {

   sum=sum+elephant_seals[i];

   }

   average_weight=sum/number_of_elephant_seals;

   printf("\nThe average weight for a population of %d elephants seals is equal to =  %d kg",number_of_elephant_seals,average_weight);
	return 0;
}
