//linear search
#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& nums , int k)
{
    int index = -1;
    for (int i = 0; i < nums.size();i++)
    {
        if(nums[i] == k)
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);

    // for (int i = 0; i < nums.size();i++)
    // {
    //     cout << nums[i] << " ";
    // }
    int k;
    cout << "enter the element which you want to find : ";
    cin >> k;

    int indexFound = linearSearch(nums, k);
    if(indexFound!=-1)
    {
        cout << "the first occurring indexx is : " << indexFound << endl;
    }
    else {
        cout << " no index found " << endl;
    }
    return 0;
}