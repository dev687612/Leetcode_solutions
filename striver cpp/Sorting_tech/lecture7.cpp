#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int arr[],int n)
{
    for (int i = 0; i <= n - 2;i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
void bubbleSort(int arr[], int n)
{
    int didSwap = 0;
    for (int i = n - 1; i >= 0;i--)
    {
        for (int j = 0; j <= i - 1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        {
            break;
        }
    }
}

void insertionSort(int arr[] , int n)
{
    for (int i = 0; i <= n - 1;i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int size;
    cout << "ENTER THE SIZE OF ARRAY : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    cout << " now the array will be : " << endl;

    // selectionSort(arr,size); // TC --> O(N*N) WORST , AVERAGE , BEST CASE TIME COMPLEXITY

    // bubbleSort(arr, size);  // TC -> O(N*N) WORST COMPLEXITY AND AVERAGE COMPLEXITY   *****BEST TIME COMLEXITTY IS : O(N)LINEAR TIME....

    insertionSort(arr, size); // TC -> O(N*N) AVERAGE ,WORST ********* BEST TIME COMPLEXITY O(N).......
    printArray(arr, size);
    return 0;
}