#include<stdio.h>
int main()
{
    float time,a;
    scanf("%f",&time);
    int b,c,d;
    b = time;
    c = time * 100;
    d = c - (b*100);
    if(b <= 24 && (d >= 0 && d < 60))
    {
        if(0 <= b && b <= 12)
        {
            printf("%d.%d am",b,d);
        }
        else if(12 < b && b <= 24)
        {
            b = b - 12;
            printf("%d.%d pm",b,d);
        }
    }

}
