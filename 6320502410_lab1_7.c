#include<stdio.h>
int main()
{
    float time,a;
    scanf("%f",&time);
    printf("%f",time);
    int b,d,c;
    if(time < 24)
    {
        a = int(time) % 12;
        b = a * 100;
        c = floor(a);
        d=b-c;
        if(0 < time && time < 12)
        {
            printf("%.2f am",time);
        }
        else if(12 < time && time < 24)
        {
            printf("%d.%d pm",c,d);
        }
    }

}
