#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  int num1 = *(int *)a;
  int num2 = *(int *)b;
  if(num1 < num2){
    return -1;
  }else {return 1;}
  return 0;
}

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a];
  for (int i=0; i < a; i++){
    scanf("%d", &b[i]);
  }

  qsort(b, a, sizeof(int), compare);

  for (int i=0; i < a; i++){
    printf("%d\n", b[i]);
  }
  
  return 0;
}