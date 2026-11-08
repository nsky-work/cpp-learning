#include<iostream>

int main(){

    int liczba_1 = 0, liczba_2 = 0, k = 0, min_l = 0, max_l = 0;

    while(true){
        liczba_2 = liczba_1;

        std::cout << "Number: ";
        std::cin >> liczba_1;

        if(liczba_1 == 0){
            break;
        }
        if(liczba_1 < 0){
            std::cout << "The number must be greater than zero\n";
            break;
        }
        if(liczba_2 == 0){
            continue;
        }

        if(liczba_1 > liczba_2){
            max_l = liczba_1;
            min_l = liczba_2;
        }else{
            max_l = liczba_2;
            min_l = liczba_1;
        }
        k = max_l / min_l;
        if((min_l * k) >= max_l){
            std::cout << "k: " << k << '\n';
        }else{
            std::cout << "k: " << k + 1 << '\n';
        }

    }
    std::cout << "End";


    return 0;
}
