
#include<stdio.h>
int main()
{
    int i,p,arr[100][100],j,s1=0,s2=0,f=0,c,r;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    if(c%2)
    {
    p=(c-1)/2;
    f=1;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || i==r-1||j==0 || j==c-1)
            s1+=arr[i][j];
        }
    }
    printf("%d",s1);
}
