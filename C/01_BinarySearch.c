#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int count = 0;

int partition(int a[], int start, int end);
void quick(int a[], int start, int end);
void printArr(int a[], int n);
int binarySearch(int a[], int beg, int end, int val);


int main()
{
    int i,n,clocks_per_sec,flag=0,key;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i] = rand()%100;
        printf("%d ",a[i]);
    }
    printf("\nEnter A Number: ");
    scanf("%d", &key);
    n = sizeof(a) / sizeof(a[0]);
    
    clock_t start = clock();
    quick(a, 0, n - 1);
    printArr(a, n);
    flag = binarySearch(a, 0, n - 1, key);
    clock_t end = clock();
    
    float time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime Taken:%f",time_taken);
    printf("\nNo. of steps : %d",count);
    
    if (flag == -1)
    printf("\nElement is not present in the array");
    else
    printf("\nElement is present at %d position of array", flag-1);
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
    for (i = 0; i < n; i++)
    printf("%d ", a[i]);
}
int binarySearch(int a[], int beg, int end, int val)
{
    int mid;
    count++;
    if (end >= beg)
    {
        mid = (beg + end) / 2;
        count++;
        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val)
        {
            return binarySearch(a, mid + 1, end, val);
        }
        else
        {
            return binarySearch(a, beg, mid - 1, val);
        }
    }
    return -1;
}
