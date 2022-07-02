
#include<stdio.h>
int main()
{
    int i,p,arr[100][100],j,s1=0,s2=0,r,a[100],k=0,c;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    /*for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("
");
    }*/
 
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s1+=arr[i][j];
        }
    }
    printf("%d",s1);
}


