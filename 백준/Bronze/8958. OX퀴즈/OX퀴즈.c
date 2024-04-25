#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  char b[a][80];
  for (int i = 0; i < a; i++){
    scanf(" %s", b[i]);
  }
  
  int cnt[a];
  for (int j = 0; j < a; j++){
    cnt[j] = 0;
  }

  for (int i = 0; i < a; i++){
    int size;
    for (size = 0; b[i][size] != '\0'; size++);
    
    for (int j = 0; j < size; j++){
      int c = 0;
      if (b[i][j] == 'O'){
        c++;
        for (int k = j+1; k < size; k++){
          if (b[i][k] == 'O'){
            c++;
            if (k == size-1){
              j = size;
              break;
            }
          }else{
            j = k;
            break;
          }
        }
      }
      for (int k = 0; k <= c; k++){
        cnt[i] += k;
      }
    }
  }
  for (int i = 0; i < a; i++){
    printf("%d\n", cnt[i]);
  }
  
  return 0;
}