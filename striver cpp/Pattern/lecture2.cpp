#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printPattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void printPattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printPattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printPattern10(int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s = 1;
        }
        else
        {
            s = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << s;
            s = 1 - s;
        }
        cout << endl;
    }
}

void printPattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // num
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // num
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern12(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}
void printPattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'a'; j <= 'e'; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'a'; ch <= 'a' + i; ch++)
        {

            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern15(int n)
{
    for (int i = 0; i < n;i++)
    {
        for (char ch = 'A'; ch <='A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void printPattern16(int n)
{

    for (int i = 0; i < n;i++)
    {
        char ch = 'A'+i;
        for (int j = 0; j <= i;j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main()
{
    int t = 3;
    for (int t = 0; t < 3; t++)
    {
        int n;
        cout << "enter number : ";
        cin >> n;
        // printPattern(n);
        // printPattern1(n);
        // printPattern2(n);
        // printPattern3(n);
        // printPattern4(n);
        // printPattern5(n);
        // printPattern6(n);
        // printPattern7(n);
        // printPattern8(n);
        // printPattern9(n);
        // printPattern10(n);
        // printPattern11(n);
        // printPattern12(n);
        // printPattern14(n);
        // printPattern15(n);
        printPattern16(n);
    }

    return 0;
}
