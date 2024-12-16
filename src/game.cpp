#include <iostream>
#include <ctime>
#include <cstdlib>

int GenRandInt(int limit) {
  srand(time(NULL));
  int rand = std::rand() % limit;

  return rand;
}

int main(void) {
  int rand_num = GenRandInt(100);
  int player_num = 0;
  int tries = 0;
  
  std::cout << "Please enter a number between 1 - 100: ";

  while (true) {
	std::cin >> player_num;

	if (player_num > rand_num) {
	  std::cout << "Number is too big\n";
	  tries++;
	} else if (player_num < rand_num) {
	  std::cout << "Number is too small\n";
	  tries++;
	} else {
	  std::cout << "YOU WINNNNN!!!!!\nNumber: " << rand_num << "\nTries: " << tries << "\n";
	  return 0;
	}
  }
}
