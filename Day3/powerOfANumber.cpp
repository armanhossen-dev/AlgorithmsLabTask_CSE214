#include<iostream>
using namespace std;

int pOfn(int n, int p){
    if(p==0){
        return 1;
    }
    return n*pOfn(n, p-1);
}

int main(){
    int num;
    int pow;
    cin >> num >> pow;
    int finalOP = pOfn(num, pow);
    cout << finalOP << endl;
return 0;
}

