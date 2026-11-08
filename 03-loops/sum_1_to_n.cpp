#include<iostream>

int main(){
    int limit, sum = 0;

    std::cout << "Enter a limit: ";
    std::cin >> limit;
    
    if(number < 0){
        std::cout << "Invalid limit";
        return 1;
    }

    for (int i = 1; i <= limit; i++){
        sum += i;
    }

    std::cout << "The sum is: " << sum;
    return 0;
}
