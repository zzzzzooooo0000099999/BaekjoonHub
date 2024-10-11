#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    char b[a];
    scanf("%s", b);
    
    for (int i = 0; i < a; i++){
        if (b[i] == 'I') b[i] = 'i';
        else b[i] = 'L';
    }
    
    printf("%s", b);

    return 0;
}