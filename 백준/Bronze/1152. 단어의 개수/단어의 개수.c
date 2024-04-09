#include <stdio.h>

int main(void) {

  char z[1000002];
  fgets(z, 1000002, stdin);

  int cnt = 0;
  int size = 0;
  for (int i = 0; z[i] != '\0'; i++){
    if (z[i] == ' '){
      cnt++;
    }size++;
  }

  if (z[0] == ' '){
    cnt--;
  }
  if (z[size - 2] == ' '){
    cnt--;
  }

  printf("%d", cnt+1);
  
  return 0;
}