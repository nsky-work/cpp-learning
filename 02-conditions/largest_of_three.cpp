#include<iostream>

int main(){
    int n1, n2, n3;

    std::cout << "Enter three numbers: ";
    std::cin >> n1 >> n2 >> n3;

    int largest_number = n1;

    if (largest_number < n2) {
        largest_number = n2;
    }

    if (largest_number < n3) {
        largest_number = n3;
    }

    std::cout << "The largest number is: " << largest_number << '\n';
    return 0;
}
