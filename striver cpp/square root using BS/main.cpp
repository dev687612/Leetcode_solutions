#include <bits/stdc++.h>
using namespace std;

int findSquareRoot(int x)
{
    int left = 1;
    int right = x/2;
    int ans = 0;

    if (x < 2)
    {
        return x;
    }

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (mid * mid <= x)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;

    cout << "the sq root is : " << findSquareRoot(n) << endl;
    return 0;
}