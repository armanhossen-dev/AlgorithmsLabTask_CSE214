#include<iostream>
#include<string>

using namespace std;
int main(){
    string word;
    cin >> word;
    
    int word_len = 0;
    for(int i = 0; word[i] != '\0'; i++){
        word_len++;
    }

    char temp, t[20];
    int h=0;

    for(int a = 0; a < word_len; a++){
        int ch_found = 0;
        for(int b = a; b < word_len; b++){
                if(word[a] == word[b]){
                    ch_found++;
                }
        }
        printf("%c: %d\n",word[a], ch_found);
        /******once this word[a] is printed, then hav to delete it form the array, then again count for others******/      
    }

    for(int i = 0; t[i] != '\0'; i++){
        cout << t[i] << endl;
    }

    return 0;
}