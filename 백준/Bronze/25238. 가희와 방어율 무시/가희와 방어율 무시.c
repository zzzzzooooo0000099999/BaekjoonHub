#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    
    if (a-(a/100*b) >= 100) printf("0");
    else printf("1");

    return 0;
}