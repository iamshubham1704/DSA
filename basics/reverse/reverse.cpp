#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int revnum = 0;
        while (x != 0) {
            int lastnumber = x % 10;
            if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10) {
                return 0;
            }
                revnum = revnum * 10 + lastnumber;
            x = x / 10;
        }
        return revnum;
    }
};

int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    Solution obj;
    cout<<obj.reverse(x);
}