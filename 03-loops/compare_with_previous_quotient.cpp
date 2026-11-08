// This program reads integers until 0 is entered.
// It prints each number that is smaller than the quotient
// of the two preceding numbers and counts how many such numbers exist.
#include<iostream>

int main(){

    int teraz=0, poprzednia=0, druga_poprzednia=0, licznik=0;

    std::cout << "Enter numbers: ";

    while(true){
        druga_poprzednia = poprzednia;
        poprzednia = teraz;
        std::cin >> teraz;
        if(teraz == 0){
            break;
        }

        if(druga_poprzednia == 0){
            continue;
        }
        double iloraz = druga_poprzednia / double(poprzednia);
        if(iloraz > teraz){
            licznik++;
            if(licznik > 1){
                std::cout << " " << teraz;
            }else{
                std::cout << teraz;
            }
        }
    }

    if(licznik > 0){
        std::cout << ", numbers found: " << licznik;
    }else{
        std::cout << "numbers found: 0";
    }

    return 0;
}
