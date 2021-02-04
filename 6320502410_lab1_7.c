#include<stdio.h>
int main()
{
    float time,a;
    scanf("%f",&time);
    int b,c,d,i;
    b = time;
    c = time * 100;
    d = c - (b*100);
    for(i=0;d > 60;i++)
    {
        d = d - 60;
    }
    b = b+i;
    if(b <= 24 )
    {
        if(0 <= b && b < 12)
        {
            if(d >= 0 && d < 10)
            {
                 printf("%d.0%d am",b,d);
            }
            else
            {
                printf("%d.%d am",b,d);
            }
        }
        else if(12 <= b && b < 24)
        {
            if(b == 12 && d == 0)
            {
                printf("%d.0%d pm",b,d);
            }
            else if(d >= 0 && d < 10)
            {
                b=b-12;
                 printf("%d.0%d pm",b,d);
            }
            else
            {
                b=b-12;
                printf("%d.%d pm",b,d);
            }
        }
        else
        {
            printf("0.00 am");
        }
    }

}
