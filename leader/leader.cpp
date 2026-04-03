#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    vector<int> leaders(vector<int>&nums){
        vector<int> answer;
        if (nums.empty()){
            return answer;
        }

        int max = nums[nums.size() - 1];
        answer.push_back(nums[nums.size() - 1]);

        for (int i = nums.size() - 2; i>=0; i--){
            if(nums[i]>max){
                answer.push_back(nums[i]);
                max = nums[i];
            }
        }

        reverse(answer.begin(), answer.end());
        return answer;  
    }
};

int main(){
    vector<int> nums = {10,22,12,3,0,6};

    Solution finder;

    vector<int> answer = finder.leaders(nums);

    cout<<"Leaders are: "<< endl;
    for(int i = 0; i<answer.size(); i++){
        cout<<answer[i]<<" ";
    }

    cout << endl;

    return 0;
}