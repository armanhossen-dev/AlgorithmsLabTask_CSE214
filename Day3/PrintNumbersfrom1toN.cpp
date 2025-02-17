// Print Numbers from 1 to N
#include<iostream>
using namespace std;
void print_num(int num){
    for(int i = 1; i<=num; i++){
        cout << i << ' ';
    }
}

int main(){
    int num;
    cin >> num;
    print_num(num);
    return 0;
}