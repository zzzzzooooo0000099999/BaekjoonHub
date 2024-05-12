#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int cnt;
  int num;
  int i = 1;
  int q = 0;
  int w = q + i;
  if (a == 1){
    printf("1/1");
    return 0;
  }
  while(1){
    if (a >= q && a <= w){
      cnt = i;
      num = a - q;
      break;
    }
    q = w + 1;
    w = q + i;
    i++;
  }

  if (i % 2 == 0){
    printf("%d/%d", num+1, cnt-num);
  }else {printf("%d/%d", cnt-num, num+1);}
  
  return 0;
}