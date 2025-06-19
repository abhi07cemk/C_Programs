#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(NULL));

    // Generate random number between 1 and 100
    int randomnumber = (rand() % 100) + 1;
	int no_of_guesses = 0;
	int guessed;

    // Print the random number
//    printf("Random number between 1 and 100: %d\n", random_number);
	
	do{
		printf("Guess the numbers : ");
		scanf("%d",&guessed);
		if(guessed>randomnumber)
		{
			printf("Lower Number Pls!\n");
		}
		else if(guessed<randomnumber)
		{
			printf("Higher Number Pls!\n");
		}
		else{
			printf("Congrats !!");
		}
		
		no_of_guesses++;
		
	}while(guessed!=randomnumber );
	
	 printf("You guessed the number in %d guesses", no_of_guesses);
    return 0;
}

