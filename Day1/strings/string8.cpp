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