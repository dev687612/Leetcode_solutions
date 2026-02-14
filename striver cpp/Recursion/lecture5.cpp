// // print name 5 times

// #include <bits/stdc++.h>
// using namespace std;
// const string name = "DEV SINGH";
// int cnt = 0;
// void print()
// {
//     if(cnt>=5)
//     {
//         return;
//     }
//     cout << cnt << " : " << name << endl;
//     cnt++;
//     print();
// }
// int main()
// {
//     print();
//     return 0;
// }

// //another method

// #include<bits/stdc++.h>
// using namespace std;

// void print(int i , int n)
// {
//     if(i>n)
//     {
//         return;
//     }
//     cout << i << " : " << "DEV SINGH" << endl;
//     print(i + 1, n);
// }
// int main()
// {
//     int n;
//     cout << "enter n : ";
//     cin >> n;
//     int i = 1;

//     print(i, n);
//     return 0;
// }

// // print sum by functional recursion
// #include <bits/stdc++.h>
// using namespace std;

// int printSum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }

//     return n + printSum(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "enter n : ";
//     cin >> n;

//     int sum = printSum(n);
//     cout << "the sum is : " << sum << endl;
//     return 0;
// }

// // print fact by recursion
// // tc = O(n)
// // sp = O(1)
// #include <bits/stdc++.h>
// using namespace std;

// int printFact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * printFact(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "enter number : ";
//     cin >> n;
//     int fact = printFact(n);
//     cout << "the fact of n is : " << fact << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int size, int i)
{
    if (i >= size / 2)
    {
        return;
    }
    swap(arr[i], arr[size - i - 1]);
    reverseArr(arr, size, i + 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0;
    reverseArr(arr, 5, i);
    cout << "reverse array through recursion :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}