#include <bits/stdc++.h>
using namespace std;

int maxLength(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    int sum = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]); // if it exist
            }
            else
            {
                mpp[sum] = i; // sum not exist
            }
        }
    }
    return maxi;
}
int main()
{
    vector<int> v{1, -1, 3, 2, -2, -8, 1, 7, 10, 23};

    int ans = maxLength(v);
    cout << "    the largest subarray with 0 sum is : " << ans << endl;

    return 0;
}