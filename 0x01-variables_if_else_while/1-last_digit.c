#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {
  srand(time(NULL));
  int n = rand() - RAND_MAX / 2;
  std::cout << "Last digit of " << n << " is ";
  int last_digit = abs(n) % 10;
  if (last_digit > 5) {
    std::cout << last_digit << " and is greater than 5";
  } else if (last_digit == 0) {
    std::cout << last_digit << " and is 0";
  } else {
    std::cout << last_digit << " and is less than 6 and not 0";
  }
  std::cout << std::endl;
}

