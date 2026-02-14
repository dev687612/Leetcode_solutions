#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE 
int findKthEle(vector<int> &nums1 , vector<int>& nums2 , int k)
{
    vector<int> nums3;

    int i = 0;
    int j = 0;
    int m = nums1.size();
    int n = nums2.size();

    while(i<m && j<n)
    {
        if(nums1[i] < nums2[j])
        {
            nums3.push_back(nums1[i]);
            i++;
        }
        else
        {
            nums3.push_back(nums2[j]);
            j++;
        }
    }
    while(i<m)
    {
        nums3.push_back(nums1[i++]);
    }
    while(j<n)
    {
        nums3.push_back(nums2[j++]);
    }

    int totalSize = m + n;

    for (int i = 1; i <= totalSize;i++)
    {
        return nums3[k-1];

    }
}

//optimal approach

int optimalBinarysearch(vector<int>& nums1 , vector<int>& nums2, int k)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    if(n1>n2)
        return optimalBinarysearch(nums2, nums1, k);

        int low = max(0, k - n2);
        int high = min(k, n1);

    while(low<=high)
    {
        int m1 = low + (high - low) / 2;
        int m2 = k - m1;

        int l1 = INT8_MIN, l2 = INT8_MIN;
        int r1 = INT8_MAX, r2 = INT8_MAX;

        if(m1<n1)
            r1 = nums1[m1];
        if(m2<n2)
            r2 = nums2[m2];

        if(m1-1 >= 0)
            l1 = nums1[m1-1];
        if(m2-1 >= 0)
            l2 = nums2[m2 - 1];

        if(l1<=r2 && l2<=r1)
        {
            return max(l1, l2);
        }
        else if(l2>r1){
            low = m1 + 1;
        }
        else{
            high = m1 - 1;
        }

    }
    return 0;
}
int main()
{
    vector<int> nums1{2, 3, 6, 7, 9};
    vector<int> nums2{1, 4, 8, 10};

    int k;
    cout << "enter the element you want to find : ";
    cin >> k;

    // int ans = findKthEle(nums1, nums2, k);
    long long ans = optimalBinarysearch(nums1, nums2, k);
    cout << "the kth element is : " << ans << endl;

    return 0;
}