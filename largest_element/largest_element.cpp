// Given an array of integers nums, return the value of the largest element in the array
// Example 1
// Input: nums = [3, 3, 6, 1]
// Output: 6
// Explanation: The largest element in array is 6
// Example 2
// Input: nums = [3, 3, 0, 99, -40]
// Output: 99
// Explanation: The largest element in array is 99

#include <bits/stdc++.h>
using namespace std;

int largestnumber(vector<int> &nums, int n){
    int largest = nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<largestnumber(nums,n);
}