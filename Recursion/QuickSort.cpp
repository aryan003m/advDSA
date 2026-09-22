// #include<bits/stdc++.h>

// using namespace std;

// void swap(int &a, int &b){
//     int temp;
//     temp = a;
//     a = temp;
//     temp = b;
// }

// int partation(int arr[], int low, int high){
//     int pivot = arr[0];
//     int i = low + 1;
//     int j = high - 1;
//     while(true){
//         while(pivot <= i){
//             i++;
//         }
//         while(j >= 0){
//             j--;
//         }
//         if( i < j){
//             swap(arr[i],arr[j]);
//         }
//         else{
//             swap(arr[pivot],arr[j];)
//         }
//         return j;
//     }

//     void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pi = partition(arr, low, high);

//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// }


// int main(){

//  return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];

    int i = low + 1;
    int j = high;

    while (true)
    {
        while (i <= high && arr[i] <= pivot)
        {
            i++;
        }

        while (j >= low && arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
        else
        {
            swap(arr[low], arr[j]);
            return j;
        }
    }
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}