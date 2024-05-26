#include <stdio.h>

int find(int a){
  int cnt = 0;
  for(int i = 2; i < a; i++){
    if(a % i == 0){
      cnt++;
    }
  }
  return cnt;
}

int main(void) {

  int q, w;
  scanf("%d %d", &q, &w);

  int sum = 0;
  int sma = 0;
  for (int i = w; i >= q; i--){
    if (find(i) == 0){
      sum += i;
      if (i == 1){
        sum--;
      }else {sma = i;}
    }
  }

  if (sum == 0){
    printf("-1");
  }else {printf("%d\n%d", sum, sma);}
  
  return 0;
}