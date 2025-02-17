/*
devide a given array into M groups such that the largest sum among the groups is minimized.
use binar search to find this minimum largest sum
*/

/****buji nai!!!
Split an Array for Minimum Largest Sum
Divide a given array into M groups such that the largest sum among the groups is minimized. 
Use binary search to find this minimum largest sum.
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool isPossible(const vector<int>& nums, int m, int mid) {
    int count = 1;
    int currentSum = 0;
    for (int num : nums) {
        currentSum += num;
        if (currentSum > mid) {
            count++;
            currentSum = num;
            if (count > m) {
                return false;
            }
        }
    }
    return true;
}

int splitArray(vector<int>& nums, int m) {
    int left = *max_element(nums.begin(), nums.end()); // Minimum possible largest sum
    int right = accumulate(nums.begin(), nums.end(), 0); // Maximum possible largest sum
    int result = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isPossible(nums, m, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {7, 2, 5, 10, 8};
    int m = 2;
    cout << "Minimum largest sum: " << splitArray(nums, m) << endl; // Output: 18
    return 0;
}

/*Explanation:
isPossible Function:

This function checks if it's possible to split the array into m groups such that no group's sum exceeds mid.

It iterates through the array, accumulating the sum of elements. If the sum exceeds mid, it starts a new group and increments the count.

If the number of groups exceeds m, it returns false.

splitArray Function:

This function performs a binary search between the maximum element in the array (left) and the sum of all elements (right).

It uses the isPossible function to check if a given midpoint (mid) is feasible.

If feasible, it updates the result and narrows the search space to the left. Otherwise, it narrows the search space to the right.

Main Function:

The main function demonstrates the usage of the splitArray function with an example array [7, 2, 5, 10, 8] and m = 2.

The output is 18, which is the minimum possible largest sum when splitting the array into two groups [7, 2, 5] and [10, 8].

Key Points:
The binary search reduces the time complexity to O(n log S), where n is the size of the array and S is the sum of the array.

The isPossible function ensures that the array can be split into m groups with the given constraints.

This implementation is efficient and works well for large inputs.*/







/*
To solve the problem of splitting an array into M groups such that the largest sum among the groups is minimized, we can use a binary search approach. The idea is to search for the minimum possible largest sum by checking if it's possible to split the array into M groups with a maximum sum that doesn't exceed a certain value.

Steps to Solve the Problem:
Define the Search Space:

The minimum possible largest sum is the maximum element in the array (since each group must contain at least one element).

The maximum possible largest sum is the sum of all elements in the array (if all elements are in one group).

Binary Search:

Perform a binary search within the defined search space to find the smallest possible largest sum.

For each midpoint in the search space, check if it's possible to split the array into M groups such that no group's sum exceeds the midpoint.

Check Feasibility:

To check if a given midpoint is feasible, iterate through the array and try to split it into groups such that the sum of each group does not exceed the midpoint.

If the number of groups required to achieve this is less than or equal to M, then the midpoint is feasible.

Implementation:
Here's the Python code implementing the above approach:
*/

/*python code

def split_array(nums, m):
    def is_possible(mid):
        count = 1
        current_sum = 0
        for num in nums:
            current_sum += num
            if current_sum > mid:
                count += 1
                current_sum = num
                if count > m:
                    return False
        return True

    left = max(nums)
    right = sum(nums)
    result = right

    while left <= right:
        mid = (left + right) // 2
        if is_possible(mid):
            result = mid
            right = mid - 1
        else:
            left = mid + 1

    return result

# Example usage:
nums = [7, 2, 5, 10, 8]
m = 2
print(split_array(nums, m))  # Output: 18
*/

/*
Explanation:
is_possible(mid): This function checks if it's possible to split the array into M groups such that no group's sum exceeds mid.

Binary Search: The binary search is performed between the maximum element in the array (left) and the sum of all elements (right). The search narrows down to the smallest possible largest sum.

Result: The result is the smallest possible largest sum that allows the array to be split into M groups.
*/