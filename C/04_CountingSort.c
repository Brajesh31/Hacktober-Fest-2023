#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int c=0;
int getMax(int a[], int n);
void countSort(int a[], int n);

int main()
{
    int i,n,clocks_per_sec,flag=0,key;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Unsorted Array: ");
    for(i=0;i<n;i++)
    {
        a[i] = rand()%100;
        printf("%d ",a[i]);
    }
    printf("\nSorted Array: ");
    n = sizeof(a)/sizeof(a[0]);
    clock_t start = clock();
    countSort(a, n);
    clock_t end = clock();
    float time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime Taken:%f",time_taken);
    printf("\nNo.Of Steps:%d",c);
}
int getMax(int a[], int n)
{
    int max = a[0];
    c++;
    for(int i = 1; i<n; i++,c++)
    {
        if(a[i] > max)
        max = a[i];
    }
    return max;
}
void countSort(int a[], int n)
{
    int output[n+1];
    int max = getMax(a, n);
    int count[max+1];
    c++;
    for (int i = 0; i <= max; ++i,c++)
    {
        count[i] = 0;
    }
    c++;
    for (int i = 0; i < n; i++,c++)
    {
        count[a[i]]++;
    }
    c++;
    for(int i = 1; i<=max; i++,c++)
    count[i] += count[i-1];
    c++;
    for (int i = n - 1; i >= 0; i--,c++)
    {
        output[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }
    c++;
    for(int i = 0; i<n; i++,c++)
    {
        a[i] = output[i];
        printf("%d ",a[i]);
    }
}