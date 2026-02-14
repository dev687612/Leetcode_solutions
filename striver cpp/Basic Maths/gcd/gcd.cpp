#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;

    cout << "enter the number : ";
    cin >> n1;
    cin >> n2;

    while(n1>0 && n2>0)
    {
        if(n1>n2)
        {
            n1 = n1 % n2;
        }
        if(n2>n1){
            n2 = n2 % n1;
        }
    }
    if(n1==0)
    {
        cout << "the gcb is :" << n2;
    }
    if(n2==0){
        cout << "the gcd is : " << n1;
    }
    return 0;
}