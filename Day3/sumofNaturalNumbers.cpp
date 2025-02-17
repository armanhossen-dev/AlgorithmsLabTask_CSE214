#include<iostream>
using namespace std;

int printNatural(int n){
    if(n == 0){
        return 0;
    }
    //6+5+4+3+2+1+0
    return n+printNatural(n-1);    
}

int main(){
    int num; 
    cin >> num;
    int sum = printNatural(num);
    cout << sum << endl;
    return 0;
}