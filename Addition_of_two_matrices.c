
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,p,arr[100][100],j,s1=0,s2=0,r,a[100][100],k=0,c;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
 
    for(i=0;i<r;i++)
    {
        for(j=0;j<r-1;j++)
        {
            printf("%d ",abs(arr[i][j]+a[i][j]));
        }
        printf("%d",abs(arr[i][j]+a[i][j]));
        printf("
");
    }
}
