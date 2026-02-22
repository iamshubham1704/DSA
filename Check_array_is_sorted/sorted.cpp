#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int countbreak = 0;
        int n = nums.size();
        for (int i = 0; i<n; i++){
            if(nums[i]>nums[(i+1) % n]){
                countbreak++;
            }
        }

        if(countbreak<=1){
            return true;
        } else { 
            return false;
        }
    }
};