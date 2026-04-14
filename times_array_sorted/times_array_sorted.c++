#include <bits/stdc++.h>
using namespace std;

int numberSorted(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return i + 1;
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    int rotations = numberSorted(arr);
    cout << rotations << endl;
    return 0;
}