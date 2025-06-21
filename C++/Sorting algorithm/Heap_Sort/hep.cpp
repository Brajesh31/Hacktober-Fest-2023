#include <iostream>
using namespace std;

// Heap sort when max heap is given
// Time Complexity: O(N log N)
// Auxiliary Space: O(1)

void heapify(int arr[], int n, int i)
{
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest = i;

    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;

    while (size > 1)
    {
        // step1: swap first & last elem
        swap(arr[1], arr[size]);
        size--;

        // step2: take it to its correct posn
        heapify(arr, size, 1);

        // 55 53 54 52 50  (swap)--> 50 53 54 52 55  (size-- now,heapify on it)--> 50 53 54 52    etc
    }
}

int main()
{
    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = sizeof(arr)/sizeof(int)-1;

    cout << "Given Array: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // heap creation                         
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "After Heapify: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);

    cout << "After sorting: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}