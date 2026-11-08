#include<iostream>

int main(){

    int liczba_1 = 0, liczba_2 = 0, liczba_3 = 0, licznik = 0;

    std::cout << "Enter a number between 1 and 777: \n";

    while(true){
        if(liczba_1 >= 1 && liczba_1 < 777){
        liczba_3 = liczba_2;
        liczba_2 = liczba_1;
        }

        std::cin >> liczba_1;
        if(liczba_1 == 777){
            break;
        }
        if(liczba_1 < 1 || liczba_1 > 777){
            std::cout << "Please enter a valid number\n";
            continue;
        }
        if(liczba_3 == 0){
            continue;
        }
        if(liczba_1 + liczba_2 > liczba_3 && liczba_1 + liczba_3 > liczba_2 && liczba_2 + liczba_3 > liczba_1){
            std::cout << "(" << liczba_3 << ", " << liczba_2 << ", " << liczba_1 << ")\n";
            licznik++;
        }


    }
    if(licznik == 0){
        std::cout << "No consecutive triplets can form the sides of a triangle.\n";
    }

    return 0;
}
