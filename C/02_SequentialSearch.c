#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count=0;
void sequential(int arr[],int n,int fi);

void main()
{
    int fi,i,n;
    double time_taken;
    printf("Enter The Size of array:");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        arr[i]= rand()%100;
        printf("%d ",arr[i]);
    }
    printf("\nEnter the Element to search:");
    scanf("%d",&fi);
    clock_t start = clock();
    sequential(arr,n,fi);
    clock_t end = clock();
    time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime Taken Is : %f",time_taken);
}

void sequential(int arr[],int n,int fi)
{
    int i,position=-1;
    count++;
    for(i=0;i<n;i++)
    {
        count++;
        if(arr[i]==fi)
        {
        count++;
        position = i;
        break;
        }
    }
    count++;
    if(position>-1)
    {
        count++;
        printf("Element %d found at : %d",arr[position],position);
        printf("\nNumber of steps required are : %d",count);
    }
    else
    {
        count++;
        printf("Element is not present");
        printf("\nNumber of steps required are : %d",count);
    }
}
