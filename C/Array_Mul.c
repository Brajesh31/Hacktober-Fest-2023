#include<stdio.h>
void main()
{
    int i,j,k,m,n,a[10][10],b[10][10],c[10][10];

    printf("Enter the no of rows");
    scanf("%d", &m);
    printf("Enter no of column");
    scanf("%d", &n);
    if(m==n){
    

    printf("Enter 1st matrix:\n");
    for ( i = 1; i <=m ; i++)
    {
        for ( j = 1; j <= n ; j++)
        {
            scanf("%d", &a[i][j]);
        }    
    }
    printf("Enter 2nd matrix:\n");
    for ( i = 1; i <= m; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            scanf("%d", &b[i][j]);
        }   
    }
    for ( i = 1; i <= m; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            c[i][j]=0;
            for ( k = 1; k <= n; k++)
            {
                c[i][j]= c[i][j]+ (a[i][k]*b[k][j]);
                
            }
            
        }
        
    }
    for ( i = 1; i <= m; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
        
    }
    }
    else{
        printf("Not Possible!");
    }
    
}
