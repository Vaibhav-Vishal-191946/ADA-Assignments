//Insertion Sort using Recursion.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void insertion_sort(int arr[], int n)
{
    if (n <= 1)
        return;
    // Sort first n-1 elements
    insertion_sort(arr, n - 1);
    // Insert last element at its correct position in sorted array.
    int last = arr[n - 1];
    int j = n - 2;
    /* Move elements of arr[0..i-1], that are greater than key,
    to one position ahead of their current position */
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
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

    insertion_sort(arr, size);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
