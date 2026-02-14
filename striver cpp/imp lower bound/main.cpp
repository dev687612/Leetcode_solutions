#include<bits/stdc++.h>
using namespace std;

int findLowerBound(vector<int>& nums , int x)
{
    int index = -1;

    int left = 0;
    int right = nums.size()-1;

    while(left<=right)
    {
        int mid = left + (right - left) / 2;

       if(nums[mid]>=x)
       {
           index = mid;
           right = mid - 1;
       }
       else{
           left = mid + 1;
       }
    }
    return index;
}
int main()
{
    vector<int> v{3,5,8,15,19,19,19};

    int lb = lower_bound(v.begin(), v.end(), 8) - v.begin();
    
    cout << "STL implemetation for lower bound : " << lb << endl;

    int x;
    cout << "Enter x : ";
    cin >> x;
    int ans = findLowerBound(v , x);

    cout << "the lower bound is : " << ans << endl;
    return 0;
}