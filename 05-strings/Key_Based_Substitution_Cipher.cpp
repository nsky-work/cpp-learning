// The program encrypts a text using a substitution cipher based on a key.
// Characters inside each pair of the key are swapped.
// Characters not found in the key remain unchanged.
// The program also counts the number of performed substitutions.

#include<iostream>
#include<string>

int main(){
    int changes_count = 0;
    std::string key, text, encrypted = {};


    std::cout << "Enter the key (up to 20 characters): \n";
    std::getline(std::cin, key);
    std::cout << "Enter the text (up to 100 characters): \n";
    std::getline(std::cin, text);

    for(size_t i = 0; i < text.length(); i++){
        for(size_t j = 0; j < key.length(); j++){
            if(text[i] == key[j]){
                if(j % 2 == 0){
                    encrypted += key[j + 1];
                    changes_count++;
                    break;
                }else{
                    encrypted += key[j - 1];
                    changes_count++;
                    break;
                }
            }else if(j == (key.length() - 1)){
                encrypted += text[i];
            }
        }
    }
    std::cout << "Key: " << key << '\n';
    std::cout << "Text: " << text << '\n';
    std::cout << encrypted << '\n';
    std::cout << "Performed " << changes_count << " substitutions";

    return 0;
}
