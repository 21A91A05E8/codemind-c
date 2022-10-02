
#include<stdio.h>
int main()
{
    int n,arr[100],i,a,b,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d%d",&a,&b);
    max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            //f=1;
            if(max<arr[i])
            max=arr[i];
        }
    }
    if(max==0)
    {
        printf("-1");
        return 0;
    }
    printf("%d",max);
}
