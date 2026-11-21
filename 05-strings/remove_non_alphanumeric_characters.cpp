
// Reads a line of text. Removes every character
// that is not a letter, a digit or a space, so the text becomes shorter.
// Prints the number of removed characters and then the text after 
//the change.

#include<iostream>
#include<string>
#include<cctype>

int main(){
    int removed = 0;
    std::string text, result = "";
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    for(size_t i = 0; i < text.length(); i++){
        if(std::isalpha(text[i]) || std::isdigit(text[i]) || text[i] == ' '){
            result += text[i];
        }else{
            removed++;
        }
    }

    std::cout << "Removed characters: " << removed << '\n';
    std::cout << "Text after the change: \"" << result << "\"\n";

    return 0;
}
