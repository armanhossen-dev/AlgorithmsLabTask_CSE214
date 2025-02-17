#include<iostream>
using namespace std;

void fibonac(int n){
    if(n>2){
        cout << "0 1";
    }
    int a = 0;
    int b = 1;
    int sum = 0;
    //if(n)
    for(int i  =  3; i <= n; i++){
        sum = a+b;
        cout << ' ' << sum ;
        a = b;
        b = sum;
    }
    if(n==1){
        cout << "0"<<endl;
    }
    if(n==2){
        cout << "0 1" << endl;
    }
}



int main(){
    int n;
    cin >> n;
    fibonac(n);
    /*
    if(n>2){
        cout << "0 1";
    }
    int a = 0;
    int b = 1;
    int sum = 0;
    //if(n)
    for(int i  =  3; i <= n; i++){
        sum = a+b;
        cout << ' ' << sum ;
        a = b;
        b = sum;
    }
    */
    return 0;
}
