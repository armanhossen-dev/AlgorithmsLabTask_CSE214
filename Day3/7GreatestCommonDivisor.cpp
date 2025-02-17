//7. Greatest Common Divisor (GCD)
#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a1, int b1){
    int a = abs(a1);
    int b = abs(b1);
    if(b == 0){
        return a;
    }else{
        gcd(b, a%b);
    }
}

int main(){
    int num1, num2; // 64,12
    cin >> num1 >> num2;
    int op = gcd(num1,num2);
    cout << op << endl;
    return 0;
}