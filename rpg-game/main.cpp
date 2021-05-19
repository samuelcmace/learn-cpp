#include <iostream>
#include <string>

#include "input.h"

int main(int argc, char* argv[])
{
    Input inputObject;
    std::string inputText;

    std::cout << "Enter in some text:";
    std::cin >> inputText;
    std::string outputText = inputObject.wordAnalysis(inputText);
    std::cout << outputText;

    return 0;
}