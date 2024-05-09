#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a][2];
  for (int i = 0; i < a; i++){
    scanf("%d", &b[i][0]);
    scanf("%d", &b[i][1]);
  }

  int arr[15][14] = {0, };
  for (int i = 0; i < 14; i++){
    arr[0][i] = i + 1;
  }
  for (int i = 1; i < 15; i++){
    for (int j = 0; j < 14; j++){
      for (int k = 0; k <= j; k++){
        arr[i][j] += arr[i-1][k];
      }
    }
  }

  for (int i = 0; i < a; i++){
    printf("%d\n", arr[b[i][0]][b[i][1]-1]);
  }
  
  return 0;
}