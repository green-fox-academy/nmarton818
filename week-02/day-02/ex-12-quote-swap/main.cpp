#include <iostream>
#include <algorithm>
#include <vector>

std::vector<std::string> quoteSwap(std::vector<std::string> &quo, const std::string& first, const std::string& second){
    std::vector<std::string> newQuote = quo;
    std::vector<std::string>::iterator posFirst =  std::find(quo.begin(), quo.end(), first);
    std::vector<std::string>::iterator posSecond =  std::find(quo.begin(), quo.end(), second);
    *posFirst = second;
    *posSecond = first;

    return quo;
}

std::string vectorToString(std::vector<std::string>& thisVector){
    std::string thisString = thisVector.at(0);
    for(unsigned i = 1; i < thisVector.size(); i++){
        thisString += ' ';
        thisString += thisVector.at(i);
    }

    return thisString;
}


int main() {
     std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};
     std::vector<std::string> quote2 = {"Two", "things", "are", "universe", "the", "infinite:", "and", "human", "stupidity;", "and", "I'm", "not", "sure", "about", "the", "first", "one."};


    // Accidentally I messed up this quote from Richard Feynman.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.
    std::vector<std::string> newQuote = quoteSwap(quote, "cannot", "do");
    std::vector<std::string> newQuote2 = quoteSwap(quote2, "universe", "infinite:");
    std::string correctQuote = vectorToString(newQuote);
    std::string correctQuote2 = vectorToString(newQuote2);
    std::cout << correctQuote << std::endl;
    std::cout << correctQuote2 << std::endl;

    return 0;
}