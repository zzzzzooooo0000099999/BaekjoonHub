#include <stdio.h>

int main()
{
    char a[3][10];
    scanf("%s %s %s", a[0], a[1], a[2]);
    
    if (a[0][0] == 'b' && a[0][2] == 'a');
    else if (a[0][0] == 'b' && a[0][1] == 'r') printf("1");
    else if (a[0][0] == 'r') printf("2");
    else if (a[0][0] == 'o') printf("3");
    else if (a[0][0] == 'y') printf("4");
    else if (a[0][0] == 'g' && a[0][3] == 'e') printf("5");
    else if (a[0][0] == 'b' && a[0][2] == 'u') printf("6");
    else if (a[0][0] == 'v') printf("7");
    else if (a[0][0] == 'g' && a[0][3] == 'y') printf("8");
    else printf("9");
    
    if (a[1][0] == 'b' && a[1][2] == 'a'){
        if (a[0][0] == 'b' && a[0][2] == 'a'){ printf("0"); return 0;}
        else printf("0");
    }
    else if (a[1][0] == 'b' && a[1][1] == 'r') printf("1");
    else if (a[1][0] == 'r') printf("2");
    else if (a[1][0] == 'o') printf("3");
    else if (a[1][0] == 'y') printf("4");
    else if (a[1][0] == 'g' && a[1][3] == 'e') printf("5");
    else if (a[1][0] == 'b' && a[1][2] == 'u') printf("6");
    else if (a[1][0] == 'v') printf("7");
    else if (a[1][0] == 'g' && a[1][3] == 'y') printf("8");
    else printf("9");
    
    if (a[2][0] == 'b' && a[2][2] == 'a');
    else if (a[2][0] == 'b' && a[2][1] == 'r') printf("0");
    else if (a[2][0] == 'r') printf("00");
    else if (a[2][0] == 'o') printf("000");
    else if (a[2][0] == 'y') printf("0000");
    else if (a[2][0] == 'g' && a[2][3] == 'e') printf("00000");
    else if (a[2][0] == 'b' && a[2][2] == 'u') printf("000000");
    else if (a[2][0] == 'v') printf("0000000");
    else if (a[2][0] == 'g' && a[2][3] == 'y') printf("00000000");
    else printf("000000000");

    return 0;
}