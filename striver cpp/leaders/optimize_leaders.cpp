#include<bits/stdc++.h>
using namespace std;

vector<int> optimiz(vector<int> &arr)
{
    vector<int> ans;
    int maxi = INT8_MIN;
    int n = arr.size();
    for (int i = n-1; i >= 0;i--)
    {
        if(arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(arr[i], maxi);
    }
    return ans;
}
int main()
{
    vector<int> v{10, 22, 12, 3, 0, 6};

    vector<int> sol = optimiz(v);
    for(auto it:sol)
    {
        cout << it << endl;
    }
    return 0;
}