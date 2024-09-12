#include <stdio.h>

int main(void) {

  char a[8][8];
  int sum = 0;
  for (int i = 0; i < 8; i++){
    for (int j = 0; j < 8; j++){
      scanf(" %c", &a[i][j]);
      if (a[i][j] == '.');
      else if (a[i][j] == 'k');
      else if (a[i][j] == 'K');
      else if (a[i][j] == 'p') sum -= 1;
      else if (a[i][j] == 'P') sum += 1;
      else if (a[i][j] == 'n') sum -= 3;
      else if (a[i][j] == 'N') sum += 3;
      else if (a[i][j] == 'b') sum -= 3;
      else if (a[i][j] == 'B') sum += 3;
      else if (a[i][j] == 'r') sum -= 5;
      else if (a[i][j] == 'R') sum += 5;
      else if (a[i][j] == 'q') sum -= 9;
      else sum += 9;
    }
  }

  printf("%d", sum);
  
  return 0;
}