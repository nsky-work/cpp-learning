// Reads an integer R (R > 1) and a positive real number S.
// The sequence is: 1, R-1, R(R+1)-2, R(R+1)(R+2)-3, R(R+1)(R+2)(R+3)-4, ...
// The program adds consecutive terms until the sum is not less than S,
// then prints how many terms were added and whether the sum is equal
// to S or by how much it exceeds S.
//
// Examples: R = 2, S = 143 -> 5 terms, the sum is equal to S
//           R = 3, S = 300 -> 5 terms, the sum is greater by 126

#include<iostream>

int main(){
    long long R, term;
    double S;

    std::cout << "Enter R: ";
    std::cin >> R;

    if(R <= 1){
        std::cout << "R must be greater than 1\n";
        return 1;
    }

    std::cout << "Enter S: ";
    std::cin >> S;

    if(S <= 0){
        std::cout << "S must be greater than 0\n";
        return 1;
    }

    int base = R, count = 1;
    long long product = 1, sum = 1;

    while(sum < S){
        if(count == 1){
            term = base - 1;
            sum += term;
            product = base * (base + 1);
            count++;
        }else{
            term = product - count;
            sum += term;
            product = product * (base + count);
            count++;
        }
    }

    std::cout << "R S: " << base << " " << S << '\n';
    std::cout << "Terms: " << count << ", ";
    if(sum == S){
        std::cout << "the result is equal.\n";
    }else{
        std::cout << "the result is greater by " << sum - S << '\n';
    }

    return 0;
}
