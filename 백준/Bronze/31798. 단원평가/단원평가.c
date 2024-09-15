#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (c == 0){
        printf("%d", (int)sqrt(a+b));
    }
    else if (a == 0){
        printf("%d", (int)pow(c,2)-b);
    }
    else{
        printf("%d", (int)pow(c,2)-a);
    }

    return 0;
}