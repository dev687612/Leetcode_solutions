#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the digits ";
    cin >> x;

    int cnt = 0;

    while(x>0)
    {
        int lastDigit = x % 10;
        if(lastDigit != 0)
        {
            cnt++;
        }
        x /= 10;
    }
    cout << " the count of that number is :" << cnt;

    return 0;
}