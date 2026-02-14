//  BRUTE FORCE APPROACH 
// TC = o(N*N)
// SC = O(N) WORST CASE
#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> &arr)
{
    vector<int> ans;
    for (int i = 0; i <arr.size();i++)
    {
        bool leaders = true;
        for (int j = i + 1; j <arr.size();j++)
        {
            if(arr[j]>arr[i])
            {
                leaders = false;
                break;
            }
        }
        if(leaders ==  true)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main()
{
    vector<int> v{10, 22, 12, 3, 0, 6};

    vector<int> sol = leader(v);
    for(auto it:sol)
    {
        cout << it << endl;
    }
    return 0;
}