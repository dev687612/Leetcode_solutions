#include<bits/stdc++.h>
using namespace std;

int ceil(vector<int>& nums , int x)
{
    int left = 0;
    int right = nums.size() - 1;
    int ans = -1;

    while(left<=right)
    {
        int mid = left + (right - left) / 2;

        if(nums[mid]>=x)
        {
            ans = nums[mid];
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return ans;
}

int floor(vector<int>& nums, int x)
{
    int left = 0;
    int right = nums.size() - 1;
    int ans = -1;

    while(left<=right)
    {
        int mid = left + (right - left) / 2;

        if(nums[mid]<=x)
        {
            ans = nums[mid];
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v{3, 5, 8, 15, 19, 19, 19};
    int x;
    cout << "Enter x : ";
    cin >> x;

    int sol_1 = floor(v, x);
    int sol_2 = ceil(v, x);

    cout << "the floor is : " << sol_1 << " and " << "the ceil is :" << sol_2 << endl;

    return 0;
}