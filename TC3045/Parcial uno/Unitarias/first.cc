#include <iostream>
#include "first.h"

int factorial(int number) {
	int temp;

	if(number <= 1) return 1;

	temp = number * factorial(number - 1);
	return temp;
}

void main(){
  factorial(9);
}
