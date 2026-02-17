#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int mini_index = i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[mini_index]){
                mini_index = j;
            }
        }

        int temp = arr[mini_index];
        arr[mini_index] = arr[i];
        arr[i] = temp;
    }

    cout<<"Selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
}