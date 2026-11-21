// The program encrypts a text using the Caesar cipher
// Two shift values (K1 and K2) are used alternately
// Only uppercase letters are encrypted, while other characters remain unchanged

#include<iostream>
#include<cctype>

int main(){
    int K1, K2, counter = 0;
    char text[101], encrypted[101] = {};

    std::cout << "Enter the first shift value: ";
    std::cin >> K1;
    std::cout << "Enter the second shift value: ";
    std::cin >> K2;

    std::cin.ignore();
    std::cout << "Enter a text: \n";
    std::cin.getline(text, 101);

    for(size_t i = 0; text[i] != '\0'; i++){
        if(isupper(text[i])){
                int number;
                number = text[i] - 'A';
                if(counter % 2 == 0){
                    number += K1;
                }else{
                    number += K2;
                }
                number = (number % 26) + 'A';
                encrypted[i] = number;
                counter++;
        }else{
            encrypted[i] = text[i];
        }
    }

    for(size_t i = 0; encrypted[i] != '\0'; i++){
        std::cout << encrypted[i];
    }

    return 0;
}
