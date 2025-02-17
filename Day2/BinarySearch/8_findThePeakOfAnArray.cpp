//in an array, a peak is an element that is greater than its neighbors.
//find the index of any one peak element.
//assume that the firs and last elements have neighbors as infinity
//bujisi but japsha, mam re ask kor bo

/*
Find the Peak of an Array
In an array, a peak is an element that is greater than its neighbors. 
Find the index of any one peak element. Assume that the first and last elements have neighbors as -∞.
*/


#include <iostream>
#include <vector>

int findPeakElement(const std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is a peak
        if (arr[mid] > arr[mid + 1]) {
            // If mid is greater than its right neighbor, a peak exists in the left half
            right = mid;
        } else {
            // Otherwise, a peak exists in the right half
            left = mid + 1;
        }
    }

    // When left == right, we have found a peak
    return left;
}

int main() {
    std::vector<int> arr = {1, 3, 20, 4, 1, 0};
    int peakIndex = findPeakElement(arr);

    std::cout << "A peak element is at index: " << peakIndex << " with value: " << arr[peakIndex] << std::endl;

    return 0;
}