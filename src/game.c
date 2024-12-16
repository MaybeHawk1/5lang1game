#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GenRandInt(int limit) {
	srand(time(NULL));
	int random = rand() % limit;

	return random;
}

int main(void) {
	int rand_number = GenRandInt(100);
	int player_number = 0;
	int tries = 0;

	printf("Please enter a number between 1 - 100: ");
	while (1) {
		scanf("%d", &player_number);

		if (player_number > rand_number) {
			printf("Number is too high\n");
			tries++;
		} else if (player_number < rand_number) {
			printf("Number is too low\n");
			tries++;
		} else {
			printf("YOU WINNNNNNNNNNNNN!!!!!!\nNumber: %d\nTries: %d\n", rand_number, tries);
			exit(0);
		}
	}
}
