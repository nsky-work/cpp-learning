#include<iostream>

int main(){
  int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number <= 1) {
        std::cout << "The number is not prime.";
        return 0;
    }

    for (int i = 2; i <= number - 1; i++) {
        if (number % i == 0) {
            std::cout << "The number is not prime.";
            return 0;
        }
    }

    std::cout << "The number is prime.";
