#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection(int arr[], int n);
void printArr(int a[], int n);

int main()
{
    int i, j,n, temp,clocks_per_sec;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int ran[n];
    printf("Unsorted Array: ");
    for(i=0;i<n;i++)
    {
        ran[i] = rand()%100;
        printf("%d ", ran[i]);
    }
    printf("\n");
    clock_t start1 = clock();
    selection(ran, n);
    printArr(ran, n);
    clock_t end1 = clock();
    float time_taken1 = ((double)(end1-start1))/CLOCKS_PER_SEC;
    printf("\nTime Taken: %f",time_taken1);
    n = sizeof(ran) / sizeof(ran[0]);
    return 0;
}
void selection(int arr[], int n)
{
    int i, j, small;
    for (i = 0; i < n - 1; i++)
    {
        small = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            small = j;
        }
        if(small != i)
        {
            int temp = arr[small];
            arr[small] = arr[i];
            arr[i] = temp;
        }
        
    }
}
void printArr(int a[], int n)
{
    int i;
    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    printf("%d ", a[i]);
}