#include<stdio.h>
int main()
{
    int n,m,t,i=0,k;
    scanf("%d%d%d",&n,&m,&t);
    fflush(stdin);
    char l;
    scanf("%c",&l);
    if(l == "L")
    {
        while(t > 0)
        {
            i++;
            if(i%2==1)
            {
                t=t-n;
                k=0;
            }
            else
            {
                t=t-m;
                k=1;
            }
        }
    }
    else if(l > "R")
    {
        while(t != 0)
        {
            i++;
            if(i%2==0)
            {
                t=t-n;
                k=0;
            }
            else
            {
                t=t-m;
                k=1;
            }
        }
    }
    if(k == 0)
    {
        printf("L");
    }
    else
    {
        printf("R");
    }
}
