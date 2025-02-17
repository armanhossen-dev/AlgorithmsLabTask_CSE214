/*
Find All Numbers Greater than a Given Number
Find all numbers in the array that are greater
than a specified number. Return a list of such numbers.
*/

#include<iostream>
using namespace std;
int main(){
    int n[10];
    for(int i = 0; i<10; i++){
        cin>>n[i];
    }
    int num;
    cin >> num;
    for(int i = 0; i<10; i++){
        if(num < n[i]){
            cout << n[i] << ' ';
        }
    }
    return 0;
}