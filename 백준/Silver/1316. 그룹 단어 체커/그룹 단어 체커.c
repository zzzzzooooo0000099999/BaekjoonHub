#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  char b[a][100];
  for (int i = 0; i < a; i++){
    scanf("%s", b[i]);
  }

  int cnt = a;
  for (int i = 0; i < a; i++){
    int size;
    for (size = 0; b[i][size] != '\0'; size++);
    for (int j = 0; j < size; j++){
      if (b[i][j] != b[i][j+1]){
        for (int k = j+1; k < size; k++){
          if (b[i][j] == b[i][k]){
            cnt--;
            j = size;
          }
        }
      }
    }
  }printf("%d", cnt);

  return 0;
}