#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int a[], int start, int end);
void quick(int a[], int start, int end);
void printArr(int a[], int n);

int main()
{
    int i,j,n,clocks_per_sec;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Unsorted Array: ");
    for(i=0;i<n;i++)
    {
        a[i] = rand()%100;
        printf("%d ",a[i]);
    }
    clock_t start1 = clock();
    quick(a, 0, n - 1);
    printArr(a,n);
    clock_t end1 = clock();
    float time_taken1 = (double)(end1-start1)/CLOCKS_PER_SEC;
    printf("\nTime Taken: %f",time_taken1);
    n = sizeof(a) / sizeof(a[0]);
    quick(a, 0, n - 1);
    return 0;
}
int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int i = (start - 1);
    for (int j = start; j <= end - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t = a[i + 1];
    a[i + 1] = a[end];
    a[end] = t;
    return (i + 1);
}
void quick(int a[], int start, int end)
{
    if (start < end)
    {
        int p = partition(a, start, end);
        quick(a, start, p - 1);
        quick(a, p + 1, end);
    }
}
void printArr(int a[], int n)
{
    int i;
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    printf("%d ", a[i]);
}
