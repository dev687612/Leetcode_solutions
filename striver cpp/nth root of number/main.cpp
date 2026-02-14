#include <bits/stdc++.h>
using namespace std;

int nthRoot(int n, int m)
{
    int left = 1;
    int right = m;

    int ans = 1;

    while(left<=right)
    {
        int mid = left + (right - left) / 2;

        //storing
        long long ans = 1;
        for (int i = 0; i < n;i++)
        {
            ans *= mid;

            if(ans>m)
                break;
        }

            if (ans == m)
            {
                return mid;
            }
        if(ans<m){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;

    int m;
    cout << "enter the number m : ";
    cin >> m;

    cout << "nth root is : " << nthRoot(n,m);
    return 0;
}