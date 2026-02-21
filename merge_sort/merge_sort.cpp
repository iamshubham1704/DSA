#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Merge two sorted halves
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;  
        int left = low;
        int right = mid + 1;

        // Merge elements from both halves
        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Copy remaining elements from left half
        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }

        // Copy remaining elements from right half
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy sorted elements back to original array
        for (int i = 0; i < temp.size(); i++)
        {
            arr[low + i] = temp[i];
        }
    }

    // Recursive Merge Sort
    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);       // Sort left half
        mergeSort(arr, mid + 1, high);  // Sort right half
        merge(arr, low, mid, high);     // Merge both halves
    }
};

int main()
{
    vector<int> arr = {5, 2, 8, 4, 1};

    Solution sol;
    sol.mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}