/** While loops that do number things
* This program runs loops to list all the numbers associated with those loops.
* @author: sh0inx
* @ver: 0.1
* COP-1000C
*/

#include <stdio.h>
#include <stdlib.h>

main() {

	int selection;
	printf("Hi there! Select a loop you'd like to run with 1, 2, 3, or 4.\n");
	scanf_s("%i", &selection);

	while (selection < 1 || selection > 4) {
		printf("Sorry, that's not a valid response. Please respond with 1, 2, 3, or 4.");
		scanf_s("%i", &selection);
	}

	//loop 1
	if (selection == 1) {
		int loopCounter = 0;
		printf("You've selected loop 1.\n");
		printf("This will show all multiples of 5 that are greater than 0 and less than 60.\n\n");
			while (loopCounter >= 0 && loopCounter < 60) {
				if (loopCounter % 5 == 0) {
					printf("%i\n", loopCounter);
				}
				loopCounter++;
		}
	}

	//loop 2
	if (selection == 2) {
		int loopCounter = 0;
		printf("You've selected loop 2.\n");
		printf("This will show all numbers that are divisible by 2 AND 7, and are less than 200.\n\n");
		while (loopCounter >= 0 && loopCounter <= 200) {
			if ((loopCounter % 2 == 0) && (loopCounter % 7 == 0)) {
				printf("%i\n", loopCounter);
			}
			loopCounter++;
		}
	}

	//loop 3
	if (selection == 3) {
		int loopCounter = 100;
		int loopVar = 0;
		printf("You've selected loop 3.\n");
		printf("This will show the sum of all multiples of 8 between 100 and 500.\n\n");
		while (loopCounter >= 100 && loopCounter <= 500) {
			if (loopCounter % 8 == 0) {
				loopVar += loopCounter;
			}
			loopCounter++;
		}

		printf("%i\n", loopVar);
	}

	//loop 4
	if (selection == 4) {
		int loopCounter = 20;
		int loopVar = 0;
		printf("You've selected loop 4.\n");
		printf("This will show the sum of all odd numbers between 20 and 100.\n\n");
		while (loopCounter >= 20 && loopCounter <= 100) {
			if (loopCounter % 2 == 1) {
				loopVar += loopCounter;
			}
			loopCounter++;
		}

		printf("%i\n", loopVar);
	}
	system("pause");
}