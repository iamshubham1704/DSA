#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for (int i = 0; i<n; i++){
        for (int j=0;j<i-1;j++){
            if (arr[j]<arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    cout<<"Bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}