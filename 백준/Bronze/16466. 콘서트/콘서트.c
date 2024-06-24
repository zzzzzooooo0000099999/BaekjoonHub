#include <stdio.h>

int main(void) {

  int num[1000001] = {0, };


  int a;
  scanf("%d", &a);
  int b[a];
  for (int i = 0; i < a; i++){
    scanf(" %d", &b[i]);
  }
  for (int i = 0; i < a; i++){
    num[b[i]]++;
  }
  for (int i = 1; i < 1000001; i++){
    if (num[i] == 0){
      printf("%d", i);
      break;
    }
  }


  return 0;
}