#include<bits/stdc++.h>
using namespace std;
vector<int> sortColor(vector<int>& nums)
{
    int n = nums.size();
    int low = 0;
    int mid = 0;

    int high = n - 1;

    while(mid<=high)
    {
        if(nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    return nums;
}
int main()
{
    vector<int> v{2,0,1};

    vector<int> ans = sortColor(v);
    for(auto it:ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;

}