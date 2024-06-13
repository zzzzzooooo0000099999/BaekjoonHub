#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  
  int cnt[a];
  int cnt_0 = 0;
  int cnt_1 = 0;
  
  for (int i = 0; i < a; i++){
    scanf(" %d", &cnt[i]);
    if (cnt[i] == 0){
      cnt_0++;
    }else {cnt_1++;}
  }
  
  if (cnt_1 > cnt_0){
    printf("Junhee is cute!");
  }else {printf("Junhee is not cute!");}
  

  return 0;
}