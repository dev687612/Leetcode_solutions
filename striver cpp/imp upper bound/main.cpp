#include <bits/stdc++.h>
using namespace std;

int findUpperBound(vector<int> &nums, int x)
{
    int left = 0;
    int right = nums.size() - 1;
    int ind = -1;

    while (left <= right)
    {
        int mid = left + (right - left)/2;

        if (nums[mid] > x)   // upper bound
        {
            ind = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
        return ind;
}
int main()
{
    vector<int> v{3,5,8,15,19,19,19};
    int x;
    cout << "Enter x : ";
    cin >> x;
    int ans = findUpperBound(v, x);

    cout << "the upper bound is : " << ans << endl;
    return 0;
}