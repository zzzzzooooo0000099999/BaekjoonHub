#include <stdio.h>
#include <math.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int num[a];
  int b[a][2];
  for (int i = 0; i < a; i++){
    scanf(" %d %d", &b[i][0], &b[i][1]);
    int c;
    if (b[i][1]%4 != 0){
      c = (b[i][1]%4);
    }else {c = 4;}
    
    num[i] = (int)pow(b[i][0], c)%10;
    if (num[i] == 0){
      num[i] = 10;
    }
  }
  
  for (int i = 0; i < a; i++){
    printf("%d\n", num[i]);
  }

  return 0;
}