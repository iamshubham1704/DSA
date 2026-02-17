#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int k = to_string(n).length();
    int sum = 0;

    while (n > 0)
    {
        int ld = n % 10;
        sum += pow(ld, k);
        n /= 10;
    }
    return sum == sum;
}


int main()
{
    int n;
    cin >> n;
    if (isArmstrong(n))
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
    return 0;
}