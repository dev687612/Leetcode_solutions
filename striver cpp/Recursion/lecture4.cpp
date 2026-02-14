#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print()
{
    if(cnt == 6)
    {
        return;
    }
    cout << cnt << endl;
    cnt++;
    cout << "recursion calling : ";
    print();
}
int main()
{
    print();
    return 0;
}