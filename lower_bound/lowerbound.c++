#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = nums.size();
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i]; 
    }
    int target;
    cin >> target; 

    int index = lower_bound(nums, target);

    cout << index << endl;

    return 0;
}