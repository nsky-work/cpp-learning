// Reads a line of text (at most 100 characters) with letters and spaces.
// Prints the text, then for every word length that occurs, how many
// words of that length there are.
// Lengths are printed in ascending order.

#include<iostream>
#include<string>

int main(){
    int letters_in_word = 0, lengths[101] = {};
    std::string text;

    std::cout << "Enter text: \n";
    std::getline(std::cin, text);
    std::cout << "For the text \"" << text << "\":" << '\n';

    for(size_t i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            lengths[letters_in_word]++;
            letters_in_word = 0;
        }else{
            letters_in_word++;
        }
    }
    lengths[letters_in_word]++;

    for(int i = 1; i < 101; i++){
        if(lengths[i] != 0){
            std::cout << "length " << i << " - words " << lengths[i] << '\n';
        }
    }

    return 0;
}
