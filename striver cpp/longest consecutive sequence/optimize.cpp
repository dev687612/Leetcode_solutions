#include<bits/stdc++.h>
using namespace std;
vector<int> lcs(vector<int>& arr)
{
    int n = arr.size();
    unordered_set<int> s;
    for (int i = 0; i < n;i++)
    {
        s.insert(arr[i]);
    }
    for(auto it:s)
    {
        
    }
}
int main()
{
    vector<int> v{102, 4, 100, 1, 101, 3, 2, 1, 1};
    return 0;
}