#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    char c[b][100];
    for (int i = 1; i <= b; i++){
        snprintf(c[i], sizeof(c[i]), "%d", a * i);
        
        int d = strlen(c[i]);
        int j = 0;
		
		char temp;
		for (int k = 0; k < d / 2; k++) {
		temp = c[i][k];
		c[i][k] = c[i][d - k - 1];
		c[i][d - k - 1] = temp;
	    }
    }
    
    int max = 0;
    for (int i = 1; i <= b; i++){
        if (max < atoi(c[i])) max = atoi(c[i]);
    }
    printf("%d", max);

    return 0;
}