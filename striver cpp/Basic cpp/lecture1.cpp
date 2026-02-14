// #include <bits/stdc++.h>
// using namespace std;

// int printSum(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }

// int main()
// {
//     // function are the set of code which perform certain operation
//     // used to modularise code
//     // used to increase redeability
//     // used to use same code multiple line

//     cout << "enter a and b" << endl;
//     int a, b;
//     cin >> a >> b;

//     int total = printSum(a, b);
//     cout << "the total sum is : " << total << endl;

//     return 0;
// }



// pass by value - it send the copy to the function

// #include<bits/stdc++.h>
// using namespace std;

// void doSomething(string s)
// {
//     s[0] = 'v';
//     s[2] = 'd';
//     cout << s << endl;
// }
// int main()
// {
//     string s = "dev";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }


// pass by reference - send the original copy to the function

#include<bits/stdc++.h>
using namespace std;

void doSomething(string &s)
{
    s[0] = 'v';
    s[2] = 'd';
    cout << s << endl;
}
int main()
{
    string s = "dev";
    doSomething(s);
    cout << s << endl;
    return 0;
}
