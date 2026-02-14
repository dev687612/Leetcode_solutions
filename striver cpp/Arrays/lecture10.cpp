//  #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int n = 5;
//      int arr[n] = {3, 2, 1, 5, 2};
//      int large = arr[0];

//      for (int i = 0; i < n-1;i++)
//      {
//          if(arr[i]>large)
//          {
//              large = arr[i];
//          }
//         }
//         cout << large;
//      return 0;
//  }

#include <bits/stdc++.h>
using namespace std;

int secondLarge(int arr[], int n)
{
    int large = arr[0];
    int secondLarge = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            secondLarge = large;
            large = arr[i];
        }
        else if (arr[i] < large && arr[i] > secondLarge)
        {
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}

int secondSmall(int arr[], int n)
{
    int secondSmall = INT16_MAX;
    int smallest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmall = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < secondSmall)
        {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

bool arraySorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

void rotateArray(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    cout << "rotating array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> moveZero(vector<int> &nums)
{
    vector<int> temp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }

    int nonZero = temp.size();
    for (int i = nonZero; i < nums.size(); i++)
    {
        nums[i] = 0;
    }

    return nums;
}
int main()
{
    int n = 6;
    int arr[n] = {1, 2, 4, 7, 7, 5};

    // cout << "the second large is : " << secondLarge(arr, n) << endl;

    // cout << "the second smallest ele : " << secondSmall(arr, n);

    // bool check = arraySorted(arr, n);

    // if (check)
    // {
    //     cout << "array is in sorted form " << endl;
    // }

    // else
    // {
    //     cout << "array is not sorted " << endl;
    // }

    // rotateArray(arr, n);

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(0);

    moveZero(nums);

    for (auto it : nums)
    {
        cout << it << " ";
    }

    return 0;
}