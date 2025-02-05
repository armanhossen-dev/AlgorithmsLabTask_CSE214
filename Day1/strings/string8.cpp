/*
8. Replace a Character in a String
Replace all occurrences of a specific character with another character in a string.
Input: "hello world", replace l with x
Output: "hexxo worxd"

*/
#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;
    getline(std::cin , name); 

    char rem, che;
    cout << "Replace : ";
    cin >> rem;

    cout << "with : ";
    cin >> che;

    for(int  i = 0; name[i] != '\0'; i++){
        if(name[i]==rem){
            name[i]=che;
        }
    }
    cout<< name << endl;

    

    return 0;
}