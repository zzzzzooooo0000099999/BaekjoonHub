#include <stdio.h>
#include <string.h>

int main()
{
    char a[10001];
    char b[10001];
    scanf("%s %s", a, b);
    
    long long sum = 0;
    for (int i = 0; i < strlen(a); i++){
        for (int j = 0; j < strlen(b); j++){
            sum += (a[i] - '0') * (b[j] - '0');
        }
    }
    
    printf("%lld", sum);

    return 0;
}