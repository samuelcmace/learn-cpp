#include "input.h"

char Input::caseAnalysis(char inputChar)
{
    if(inputChar == 'A')
        return 'a';
    else if(inputChar == 'B')
        return 'b';
    else if(inputChar == 'C')
        return 'c';
    else if(inputChar == 'D')
        return 'd';
    else if(inputChar == 'E')
        return 'e';
    else if(inputChar == 'F')
        return 'f';
    else if(inputChar == 'G')
        return 'g';
    else if(inputChar == 'H')
        return 'h';
    else if(inputChar == 'I')
        return 'i';
    else if(inputChar == 'J')
        return 'j';
    else if(inputChar == 'K')
        return 'k';
    else if(inputChar == 'L')
        return 'l';
    else if(inputChar == 'M')
        return 'm';
    else if(inputChar == 'N')
        return 'n';
    else if(inputChar == 'O')
        return 'o';
    else if(inputChar == 'P')
        return 'p';
    else if(inputChar == 'Q')
        return 'q';
    else if(inputChar == 'R')
        return 'r';
    else if(inputChar == 'S')
        return 's';
    else if(inputChar == 'T')
        return 't';
    else if(inputChar == 'U')
        return 'u';
    else if(inputChar == 'V')
        return 'v';
    else if(inputChar == 'W')
        return 'w';
    else if(inputChar == 'X')
        return 'x';
    else if(inputChar == 'Y')
        return 'y';
    else if(inputChar == 'Z')
        return 'z';
    else
        return inputChar;
}

std::string Input::wordAnalysis(std::string inputStr)
{
    std::string outputStr;

    for(int i = 0; i < inputStr.length(); i++)
    {
        outputStr[i] = caseAnalysis(inputStr.at(i));
    }

    return outputStr;
}