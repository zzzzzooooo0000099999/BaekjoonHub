#include <stdio.h>

int main(void) {

  char a[3] = {""}, b[3] = {""};
  scanf("%s %s", a, b);

  char q[4], w[4];
  q[0] = a[2];
  q[1] = a[1];
  q[2] = a[0];
  q[3] = '\0';
  w[0] = b[2];
  w[1] = b[1];
  w[2] = b[0];
  w[3] = '\0';

  if (q[0] > w[0]){
    printf("%s", q);
  }else if (q[0] < w[0]){
    printf("%s", w);
  }else {
    if (q[1] > w[1]){
      printf("%s", q);
    }else if (q[1] < w[1]){
      printf("%s", w);
    }else {
      if (q[2] > w[2]){
        printf("%s", q);
      }else{
        printf("%s", w);
      }
    }
  }
  
  return 0;
}