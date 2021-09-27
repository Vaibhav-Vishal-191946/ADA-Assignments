// Merge sort using recursion
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void merge(int arr[], int p, int q, int r);

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r)
{
    // midpoint is the point where the array is divided into two subarrays
    int midpoint = l + (r - l) / 2;
    if (l < r)
    {
        mergeSort(arr, l, midpoint);
        mergeSort(arr, midpoint + 1, r);
    }
    // Merge the sorted subarrays
    merge(arr, l, midpoint, r);
}

// Merge two subarrays Left_arr and Right_arr into arr
void merge(int arr[], int p, int q, int r)
{
    // Create Left[] ← A[p..q] and Right[] ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int left_arr[n1], right_arr[n2];

    for (int i = 0; i < n1; i++)
        left_arr[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        right_arr[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either left_arr or right_arr, pick larger among
    // elements left_arr and right_arr and place them in the correct position at A[p..r]
    while (i < n1 && j < n2)
    {
        if (left_arr[i] <= right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
    // When we run out of elements in either left_arr or right_arr,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

int main()
{
    srand(time(0));
    int size;
    cout << "Enter the size of random array to be sorted: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        arr[i] = rand();

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
