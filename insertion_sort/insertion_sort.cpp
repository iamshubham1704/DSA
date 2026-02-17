#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; 
    }

    cout<<"Insertion sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {9,6,4,8,3,66,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
}