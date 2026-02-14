// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size = 5;
//     int arr[size];

//     for (int i = 0; i < size;i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[13] = {0};

//     for (int i = 0; i < size;i++)
//     {
//         hash[arr[i]] += 1;   // hash array to map element
//     }

//     while(true) 
//     {
//         int num;
//         cout << "the number is : ";
//         cin >> num;

//         cout << hash[num]<<endl;
//     }
//     return 0;
// }


// //******** CHARACTER HASHING */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     int hash[26] = {0};

//     for (int i = 0; i < s.size();i++)
//     {
//         hash[s[i]- 'a']++;
//     }

//         while (true)
//         {
//             char c;
//             cout << "char c is : ";
//             cin >> c;

//             cout << hash[c - 'a'] << endl;
//         }
//         return 0;
// }



// //******** CHARACTER HASHING */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     int hash[256] = {0};

//     for (int i = 0; i < s.size();i++)
//     {
//         hash[s[i]]++;
//     }

//         while (true)
//         {
//             char c;
//             cout << "char c is : ";
//             cin >> c;

//             cout << hash[c] << endl;
//         }
//         return 0;
// }



//********map in hashing

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int arr[n];

//     map<int, int> mpp;
//     cout << "enter array element : " << endl;
//     for (int i = 0; i < n;i++)
//     {
//         cin >> arr[i];
//         mpp[arr[i]]++;
//     }

//     //iterate over map
//     cout << "iterate over map : " << endl;
//     for(auto it:mpp)
//     {
//         cout << it.first << "->" << it.second << endl;
//     }

//     int q = 5;
//     while(q--)
//     {
//         int num;
//         cout << "enter number : ";
//         cin >> num;

//         cout << "the number appears : " << mpp[num] << endl;
//     }
//     return 0;
// }


// //******* string hashing */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     map<char, int> mpp;
//     for (int i = 0; i < s.size();i++)
//     {
//         mpp[s[i]]++;
//     }

//     //iterate
//     cout << "iterate over map : " << endl;
//     for(auto it:mpp)

//     {
//         cout << it.first << "->" << it.second << endl;
//     }

//     int q = 5;
//     while(q--)
//     {
//         char c;
//         cout << "enter char : ";
//         cin >> c;

//         cout << "the char appears : " << mpp[c] << endl;
//     }

//     return 0;
// }


//******** UNORDERED MAP */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size();i++)
    {
        mpp[s[i]]++;
    }

    //iterate
    cout << "iterate over map : " << endl;
    for(auto it:mpp)

    {
        cout << it.first << "->" << it.second << endl;
    }

    int q = 5;
    while(q--)
    {
        char c;
        cout << "enter char : ";
        cin >> c;

        cout << "the char appears : " << mpp[c] << endl;
    }

    return 0;
} 