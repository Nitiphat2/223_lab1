#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    k=num[0];
    for(i=0;i<n;i++)
    {
        if(k<num[i]);
        {
            k=num[i];
            j=i;
        }
    }
    printf("%d %d",j,k);
}
