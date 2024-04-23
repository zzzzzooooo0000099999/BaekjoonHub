#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a][3];
  for (int i = 0; i < a; i++){
    scanf(" %d %d %d", &b[i][0], &b[i][1], &b[i][2]);
  }

  for (int i = 0; i < a; i++){
    int q = 0, w = 0;
    if (b[i][2]%b[i][0] == 0){
      q = b[i][0];
    }else {q = b[i][2]%b[i][0];}
    w = (b[i][2]-1)/b[i][0] + 1;
    
    printf("%d\n", q*100 + w);
  }
  
  return 0;
}