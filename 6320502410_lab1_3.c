#include<stdio.h>
int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    int a,b;
    a = n%3;
    b = n%11;
    printf("%d %d",a,b);
}
