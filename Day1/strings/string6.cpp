#include <iostream>
#include <string>
using namespace std;

string findLongestWord(const string& sentence) {
    string longestWord;
    string currentWord;
    int maxLength = 0;

    for (char c : sentence) {
        if (c == ' ') {
            if (!currentWord.empty()) {
                if (currentWord.length() > maxLength) {
                    maxLength = currentWord.length();
                    longestWord = currentWord;
                }
                currentWord.clear();
            }
        } else {
            currentWord += c;
        }
    }
    // Check the last word in case the sentence doesn't end with a space
    if (!currentWord.empty() && currentWord.length() > maxLength) {
        longestWord = currentWord;
    }

    return longestWord;
}

int main() {
    string input;  //"I love programming challenges";
    getline(cin,input);
    string output = findLongestWord(input);
    cout << output << endl; // Outputs "programming"
    return 0;
}

/**
#include<stdio.h>
#include<string.h>
int main(){
    char inputSTR[50];
    fgets(inputSTR, sizeof(inputSTR), stdin);
    inputSTR[strcspn(inputSTR, "\n")] = '\0'; //remove newline

    int len , c=0 ;
    
    for(len = 0; inputSTR[len]!='\0'; len++)

    //find how many spaces
    for(int i = 0; i < len; i++){
        if(inputSTR[i]== ' '){
            c++;
        }
    }
    return 0;
}
*/