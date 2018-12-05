#include <stdio.h>
#include <string.h>

int isCharEqual(char a, char b) {
    return ((a == b) || ((a < 123) && (a > 96) && (b == (a - 32))) || ((b < 123) && (b > 96) && (a == (b - 32))));
}

int isWord(char* sentence, char* word, int pos){
    for(int j = 0; j < strlen(word); j++){
        if(!isCharEqual(sentence[pos+j], word[j]))
            return 0;
    }
    return 1;
}

int isInSentence(char* sentence, char* word){
    int wordLength = strlen(word);
    int i = 0;

    while(sentence[i+wordLength] != '\0') {
        if (isWord(sentence, word, i))
            return 1;
        i++;
    }
    return 0;
}

int main() {
    // Create a function which takes two strings as parameters
    // One string is actually a sentence and the other one is a word
    // It should return 1 if the given sentence contains the given word
    // and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    char word[20] = "apple";
    char sentence[100] = "An appLe a day keeps the doctor away.";

    // the output should be: 1
    printf("%d",isInSentence(sentence, word));

    return 0;
}