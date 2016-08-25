
#include <iostream>
#include "sample.h"

int main(int argv, char** argc){

	int num;
	std::cout << "Input Prime number: " ;
	std::cin >> num;

	//bool isTenPrime = IsPrime(10);
	bool isTenPrime = IsPrime(num);
	if (isTenPrime == true) std::cout << num << " is prime number" << std::endl;
	else  std::cout << "10 is not prime number" << std::endl;
	return 1;
}
