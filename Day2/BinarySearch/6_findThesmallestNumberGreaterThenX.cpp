//take input of 5number
//then inorder them and add in to an array
// write the next number of x

#include <iostream>
#include <vector>
using namespace std;

//int findSmallestNumberGreaterThanX(const vector<int>& arr, int X) {
int next(const vector<int>& arr, int X) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > X) {
            // If the current element is greater than X, it's a potential candidate
            result = arr[mid];
            // Try to find a smaller number that is still greater than X
            right = mid - 1;
        } else {
            // If the current element is less than or equal to X, search in the right half
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int X = 6;

    int result = next(arr, X);

    if (result != -1) {
        cout << "The smallest number greater than " << X << " is: " << result << endl;
    } else {
        cout << "No number greater than " << X << " exists in the array." << endl;
    }

    return 0;
}
