#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insert(int ran[], int n);
void printArr(int a[], int n);

int main()
{
    int i,n,clocks_per_sec;
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
    insert(ran,n);
    printArr(ran,n);
    clock_t end1 = clock();
    float time_taken1 = ((double)(end1-start1))/CLOCKS_PER_SEC;
    printf("\nTime Taken:%f",time_taken1);
    n = sizeof(ran) / sizeof(ran[0]);
    return 0;
}
void insert(int ran[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = ran[i];
        j = i - 1;
        while (j >= 0 && temp <= ran[j])
        {
            ran[j + 1] = ran[j];
            j = j - 1;
        }
        ran[j + 1] = temp;
    }
}
void printArr(int a[], int n)
{
    int i;
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
    printf("%d ", a[i]);
}