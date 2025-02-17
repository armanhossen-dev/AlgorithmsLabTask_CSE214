//roted array given
//have to find a number in it
/*
Search in a Rotated Array
A sorted array is rotated at an unknown point. 
For example, [4, 5, 6, 7, 1, 2, 3]. Search for a
 specific number in this array using binary search.
*/

#include <iostream>
#include <vector>
using namespace std;

int searchInRotatedArray(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }

        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            // If the target is in the sorted left half
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1; // Search in the left half
            } else {
                left = mid + 1; // Search in the right half
            }
        }
        // Otherwise, the right half is sorted
        else {
            // If the target is in the sorted right half
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
    }

    return -1; // Target not found
}

#define size 7
int main() {
    vector<int> arr(size);
    for(int i = 0; i<size; i++){
        //{4, 5, 6, 7, 1, 2, 3}
        cin >> arr[i];
    } 
    int target;
    cin >> target; // 2

    int result = searchInRotatedArray(arr, target);

    if (result != -1) {
        cout << "Target " << target << " found at index: " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}