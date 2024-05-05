#include <stdio.h>

int main(void) {

  int cnt[10001];
  for (short i = 0; i < 10001; i++){
    cnt[i] = 0;
  }
  
  int a;
  scanf("%d", &a);
  short b;
  for (int i = 0; i < a; i++){
    scanf("%hd", &b);
    cnt[b]++;
  }

  for (short i = 0; i < 10001; i++){
    for (int j = 0; j < cnt[i]; j++){
      printf("%hd\n", i);
    }
  }
  
  return 0;
}