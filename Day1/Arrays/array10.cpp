/*
10. Maximum Difference Between Two Elements
Find the maximum difference between two elements in the array such that the larger element appears after the smaller one.
Input: 2, 3, 10, 6, 4, 8, 1
Output: 8 (difference between 10 and 2)

*/

#include <iostream>
#include <vector>
using namespace std;

int maxDifference(vector<int>& arr) {
    if (arr.size() < 2) return 0;
    int min_so_far = arr[0];
    int max_diff = 0;
    for (size_t i = 1; i < arr.size(); ++i) {
        int current_diff = arr[i] - min_so_far;
        if (current_diff > max_diff) {
            max_diff = current_diff;
        }
        if (arr[i] < min_so_far) {
            min_so_far = arr[i];
        }
    }
    return max_diff;
}
#define size 7


int main() {
    
    vector<int> input(7); // {2, 3, 10, 6, 4, 8, 1}
    for(int i = 0 ; i<size ; i++){
        cin>>input[i];
    }
    cout << maxDifference(input) << endl; // Outputs 8
    return 0;
}