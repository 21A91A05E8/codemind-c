
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
 
    for(i=0;i<c;i++)
    {
        s2=0;
        for(j=0;j<r;j++)
        {
            s2+=arr[j][i];
        }
        a[k++]=s2;
    }
    for(i=0;i<r;i++)
    {
        s2=0;
        for(j=0;j<c;j++)
        {
            s2+=arr[i][j];
        }
        a[k++]=s2;
    }
    int max=a[0];
    for(i=0;i<k;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    /*for(i=0;i<k;i++)
    printf("%d ",a[i]);*/
    printf("%d",max);
}
