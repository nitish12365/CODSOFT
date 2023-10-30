#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& text) {
    std::stringstream ss(text);
    std::string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    std::cout << "Enter a line of text: ";
    std::string input;
    std::getline(std::cin, input);

    int numWords = countWords(input);

    std::cout << "Number of words in the input: " << numWords << std::endl;

    return 0;
}
