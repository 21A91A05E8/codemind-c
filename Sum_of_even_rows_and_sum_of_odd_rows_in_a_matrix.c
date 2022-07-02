
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
        s2=0;
        for(j=0;j<c;j++)
        {
            s2+=arr[i][j];
        }
        if(i%2==0)
        k+=s2;
        else
        s1+=s2;
    }
    printf("%d %d",k,s1);
}


