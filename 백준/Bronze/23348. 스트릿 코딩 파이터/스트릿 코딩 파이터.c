#include <stdio.h>

int main(void) {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int num;
  scanf(" %d", &num);
  int sco[num];
  for (int i = 0; i < num; i++){
    sco[i] = 0;
  }
  for (int i = 0; i < num; i++){
    int cnt[9];
    scanf(" %d %d %d", &cnt[0], &cnt[1], &cnt[2]);
    scanf(" %d %d %d", &cnt[3], &cnt[4], &cnt[5]);
    scanf(" %d %d %d", &cnt[6], &cnt[7], &cnt[8]);
    sco[i] += cnt[0] * a + cnt[1] * b + cnt[2] * c;
    sco[i] += cnt[3] * a + cnt[4] * b + cnt[5] * c;
    sco[i] += cnt[6] * a + cnt[7] * b + cnt[8] * c;
  }
  int max = sco[0];
  for (int i = 0; i < num; i++){
    if (sco[i] > max){
      max = sco[i];
    }
  }
  printf("%d", max);
  
  return 0;
}