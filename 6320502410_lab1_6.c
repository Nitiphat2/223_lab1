#include<stdio.h>
int main()
{
    int n,m,t,i=0,k=0;
    scanf("%d%d%d",&n,&m,&t);
    char l;
    scanf(" %c",&l);
    if((n>0 && n < 1000) && (m>0 && m < 1000) && (t > 1 && t <1000000000)&&(n<t&&m<t))
    {
        if(l == 'L')
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
        else if(l == 'R')
        {
            while(t > 0)
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
                    k = 1;
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

}
