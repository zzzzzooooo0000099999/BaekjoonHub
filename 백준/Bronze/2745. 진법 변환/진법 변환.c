#include <stdio.h>
#include <math.h>

int main(void) {

  char a[100];
  int b;
  long long c = 0;
  scanf("%s %d", a, &b);

  int size;
  for (size = 0; a[size] != '\0'; size++);

  for(int i = 0; i < size; i++){
    if (a[i] >= '0' && a[i] <= '9'){
      c += (a[i] - '0') * pow(b, size - i - 1);
    }else {
      a[i] = a[i] - 'A' + 10;
      c += a[i] * pow(b, size - i - 1);
    }
  }
  printf("%lld", c);
  
  return 0;
}