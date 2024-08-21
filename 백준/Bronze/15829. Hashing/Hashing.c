#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

  int a;
  scanf("%d", &a);
  char b[a];
  scanf("%s", b);

  int sum=0;
  for (int i=0; i<a; i++){
    sum += (b[i] - 'a' + 1) * (pow(31, i));
  }

  printf("%d", sum);
  
  return 0;
}