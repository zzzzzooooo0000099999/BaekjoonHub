#include <stdio.h>

int main(void) {

  int a[10], b[10];
  char c[10];
  for (int i = 0; i < 10; i++){
    scanf("%d ", &a[i]);
  }
  for (int i = 0; i < 10; i++){
    scanf(" %d", &b[i]);
  }
  for (int i = 0; i < 10; i++){
    if (a[i] > b[i]){
      c[i] = 'A';
    }else if (a[i] == b[i]){
      c[i] = 'D';
    }else {c[i] = 'B';}
  }
  int sco_a = 0, sco_b = 0;
  for (int i = 0; i < 10; i++){
    if (c[i] == 'A'){
      sco_a += 3;
    }else if (c[i] == 'B'){
      sco_b += 3;
    }else {
      sco_a += 1;
      sco_b += 1;
    }
  }
  printf("%d %d", sco_a, sco_b);

  if (sco_a > sco_b){
    printf("\nA");
  }else if (sco_a == sco_b){

    for (int i = 9; i >= -1; i--){
      if (i == -1){
        printf("\nD");
        break;
      }else if (c[i] == 'A'){
        printf("\nA");
        break;
      }else if (c[i] == 'B'){
        printf("\nB");
        break;
      }
    }

  }else {printf("\nB");}


  return 0;
}