#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countdigits(int n){
    int count = 0;
    while(n>0){
        count += 1;
        n/=10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countdigits(n);
}