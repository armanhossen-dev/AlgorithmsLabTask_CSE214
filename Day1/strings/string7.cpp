#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) return false;
    string s1_sorted = s1;
    string s2_sorted = s2;
    sort(s1_sorted.begin(), s1_sorted.end());
    sort(s2_sorted.begin(), s2_sorted.end());
    return s1_sorted == s2_sorted;
}

int main() {
    string s1; // "listen"
    string s2; // "silent"
    if (areAnagrams(s1, s2)) {
        cout << "Yes, they are anagrams" << endl;
    } else {
        cout << "No, they are not anagrams" << endl;
    }
    return 0;
}


/*
7. Check if Two Strings are Anagrams
An anagram is when two strings have the same characters in a different order. Check if two strings are anagrams.
Input: "listen" and "silent"
Output: "Yes, they are anagrams"
*/




/**
#include<iostream>
#include<string>
using namespace std;

int main(){
    string inp1;
    string inp2;
    
    cout<<"Input : ";
    cin>> inp1;
    cout << "Compare : ";
    cin>> inp2;

    int len1 = inp1.length();
    int len2 = inp2.length();

    if(len1 == len2){

    }

    for()
    return 0;
}

using namespace std;
int main(){
    string word;
    cin >> word;
    
    int word_len = 0;
    for(int i = 0; word[i] != '\0'; i++){
        word_len++;
    }
    //cout<< word_len << endl;
    //There are 26 characters in the English alphabet.
                            //  a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
    int alp[27]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char alp_ch[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //if i input any uppper case then  i have to convet every char i select to lowercase then if found then count how many
    int i,j;
    for(i = 0; i< word_len; i++){
        for(j = 0; j<26;j++){
            if(word[i] == alp_ch[j]){
                //cout<< word[i] << "found"<<endl;
                alp[j+1] = alp[j+1]+1; //cout<<alp[j+1] <<'\n' ;            
            }
        }
    }
    int k, h;
    //int how_many_unique_char= 0;
    for(int h = 0; h < 27; h++){
        if(alp[h] > 0){
            k=h-1;
            cout << alp_ch[k] <<':'<< alp[h] <<'\n';
            //how_many_unique_char++;
        }
    }

    //unique char koi ta, toto size er array then print  
    //make new array of size "how_many_unique_char"  then assign value also another array to store the char for the value, then if found in the word then print in serial


*/