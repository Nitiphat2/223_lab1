#include<stdio.h>
int main()
{
    float time;
    scanf("%f",&time);
    if(0 < time && time < 12)
    {
        printf("%.2f am",time);
    }
    else if(12 < time && time < 24)
    {
        printf("%.2f pm",time);
    }
}
