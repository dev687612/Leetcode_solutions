#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion1(vector<int> &arr1 , vector<int> & arr2)
{
    set<int> s;

    for(auto it:arr1)
    {
        s.insert(it);
    }

    for(auto it: arr2)
    {
        s.insert(it);
    }

    vector<int> ans;
    for(auto it:s)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;

    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(4);
    arr1.push_back(6);

    arr2.push_back(2);
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(7);

    findUnion1(arr1, arr2);
    return 0;
}