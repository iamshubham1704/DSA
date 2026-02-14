#include<iostream>
using namespace std;

int palindrome(int n){
    int rev=0;
    int temp = n;
    while (n>0){
        int lnum = n%10;
        rev = rev*10 + lnum;
        n/=10;
    }
    if (rev == temp){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if (palindrome(n) == 1){
        cout<<"Number is palindrome.";
    } else {
        cout<<"Number is not palindrome.";
    }
    return 0;
}