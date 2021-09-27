//Bubble Sort using recursion.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void bubble_sort(int arr[], int n)
{
    if (n == 1)
        return;

    // One pass of bubble sort. After this pass, the largest element is moved (or bubbled) to end.
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);

    // Largest element is fixed, recur for remaining array
    bubble_sort(arr, n - 1);
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

    bubble_sort(arr, size);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
