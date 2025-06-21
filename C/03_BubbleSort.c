#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void bubble(int ran[], int n);

void main()
{
    int i, j,n, temp,clocks_per_sec;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int ran[n];
    for(i=0;i<n;i++)
    {
        ran[i] = rand()%100;
    }
    
    printf("Sorted Array: ");
    clock_t start1 = clock();
    bubble(ran,n);
    clock_t end1 = clock();
    float time_taken1 = ((double)(end1-start1))/CLOCKS_PER_SEC;
    
    printf("\nTime Taken:%f",time_taken1);
    n = sizeof(ran) / sizeof(ran[0]);
}


void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble(int ran[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ran[j] < ran[i])
				swap(&ran[i],&ran[j]);
        }
        printf("%d ",ran[i]);
    }
}
