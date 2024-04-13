#include <stdio.h>

int main(void) {

  int q, w;
  scanf("%d %d", &q, &w);
  char z[w][q];
  for (int i = 0; i < q; i++){
    for (int j = 0; j < w; j++){
      scanf(" %c", &z[j][i]);
    }
  }

  int hor_cnt = q;
  int ver_cnt = w;

  for (int i = 0; i < q; i++){
    for (int j = 0; j < w; j++){
      if (z[j][i] == 'X'){
        hor_cnt--;
        break;
      }
    }
  }
  for (int i = 0; i < w; i++){
    for (int j = 0; j < q; j++){
      if (z[i][j] == 'X'){
        ver_cnt--;
        break;
      }
    }
  }
  
  int max= (hor_cnt > ver_cnt) ? hor_cnt : ver_cnt;
  printf("%d", max);

  return 0;
}