#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  if (a % 5 == 0){
    int cnt = a/5;
    printf("%d", cnt);
  }
  if (a % 5 == 1){
    int cnt = a/5;
    if (cnt-1<0){
      printf("-1");
    }else {printf("%d", cnt+1);}
  }
  if (a % 5 == 2){
    int cnt = a/5;
    if (cnt-2<0){
      printf("-1");
    }else {printf("%d", cnt+2);}
  }
  if (a % 5 == 3){
    int cnt = a/5;
    if (cnt<0){
      printf("-1");
    }else {printf("%d", cnt+1);}
  }
  if (a % 5 == 4){
    int cnt = a/5;
    if (cnt-1<0){
      printf("-1");
    }else {printf("%d", cnt+2);}
  }
  
  return 0;
}