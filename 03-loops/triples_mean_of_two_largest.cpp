// Triples with a large mean
// Reads integers until 0 is entered. G is read first.
// Prints every triple of consecutive numbers where the mean
// of the two largest values is greater than G, and counts them.
// Example: G=3, input 1 3 4 -2 -10 4 2 7 0 -> 3 triples.
#include<iostream>

int main(){
    int liczba_1 = 0, liczba_2 = 0, liczba_3 = 0, w_1 = 0, w_2 = 0, G = 0, ile = 0;

    std::cout << "Enter G: \n";
    std::cin >> G;

    std::cout << "Enter numbers: \n";

    while(true){
        liczba_3 = liczba_2;
        liczba_2 = liczba_1;
        std::cin >> liczba_1;
        if(liczba_1 == 0){
            break;
        }
        if(liczba_3 == 0){
            continue;
        }
        if(liczba_1 <= liczba_2 && liczba_1 <= liczba_3){
            w_1 = liczba_2;
            w_2 = liczba_3;
        }else if(liczba_2 <= liczba_1 && liczba_2 <= liczba_3){
            w_1 = liczba_1;
            w_2 = liczba_3;
        }else{
            w_1 = liczba_1;
            w_2 = liczba_2;
        }
        if((w_1 + w_2) / double(2) > G){
            std::cout << liczba_3 << ", " << liczba_2 << ", " << liczba_1 << "; ";
            ile++;
        }
    }
    std::cout << "Triples found: " << ile << '\n';

    return 0;
}
