#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int cnt1 = 0;
    string str;
    getline(cin , str);
    cout << str << endl;   
    
    int len = str.length();
    cout << len << endl;
    for(int i = 0; i<len; i++ ){
        if(str[i]=='1'){
            cnt1++;
        }
    }
    cout << "1 in the "<<str<<" is "<<cnt1<<" times \n" ;
    

    
    
    return 0;
}