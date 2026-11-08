#include<iostream>

int main(){

    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if(number > 0){
        std::cout << "Number is positive";
    }else if(number < 0){
        std::cout << "Number is negative";
    }else{
        std::cout << "The number is zero";
    }
    return 0;
}
