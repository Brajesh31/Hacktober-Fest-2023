#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void printArr(int a[], int n);

int main()
{
    int i,j,n,clocks_per_sec;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int ran[n];
    printf("Unsorted Array: ");
    for(i=0;i<n;i++)
    {
        ran[i] = rand()%100;
        printf("%d ",ran[i]);
    }
    clock_t start1 = clock();
    mergeSort(ran, 0, n - 1);
    printArr(ran, n);
    clock_t end1 = clock();
    float time_taken1 = (double)(end1-start1)/CLOCKS_PER_SEC;
    printf("\nTime Taken:%f",time_taken1);
    n = sizeof(ran) / sizeof(ran[0]);
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void printArr(int a[], int n)
{
    int i;
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    printf("%d ", a[i]);
}