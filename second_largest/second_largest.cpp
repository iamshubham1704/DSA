// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.
// Example 1
// Input: nums = [8, 8, 7, 6, 5]
// Output: 7
// Explanation:
// The largest value in nums is 8, the second largest is 7
// Example 2
// Input: nums = [10, 10, 10, 10, 10]
// Output: -1
// Explanation:
// The only value in nums is 10, so there is no second largest value, thus -1 is returned

#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[] , int n) {
    if (n<2){
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i<n; i++){
        if (arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i]>secondLargest && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    // input array
    int arr[] = {8, 8, 7, 6, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargest(arr,n);
}
