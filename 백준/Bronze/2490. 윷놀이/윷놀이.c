#include <stdio.h>
#include <string.h>

int main(void) {

  int a[3][4];
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for (int i = 0; i < 3; i++){
    int sum = 0;
    for (int j = 0; j < 4; j++){
      sum += a[i][j];
    }
    if (sum == 4) printf("E\n");
    else if (sum == 3) printf("A\n");
    else if (sum == 2) printf("B\n");
    else if (sum == 1) printf("C\n");
    else printf("D\n");
  }
  
  return 0;
}