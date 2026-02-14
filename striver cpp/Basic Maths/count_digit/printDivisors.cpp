#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    vector<int> ans;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % 1 == 0)
        {
            // cout << i << " ";
            ans.push_back(i);
        }
        if ((n / i) != i)
        {
            // cout << (n / i) << " ";
            ans.push_back((n / i));
        }
    }
    sort(ans.begin(), ans.end());
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    int res = accumulate(ans.begin(), ans.end(),0);
    cout << res;

    return 0;
}