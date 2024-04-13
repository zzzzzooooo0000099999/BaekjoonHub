#include <stdio.h>

int main(void) {

  char z[1000000];
  scanf("%s", z);
  int size;
  for (size = 0; z[size] != '\0'; size++);

  for (int i = 0; i < size; i++){
    if (z[i] >= 'a' && z[i] <= 'z'){
      z[i] = z[i] - 32;
    }
  }

  int cnt[25] = {0, };
  for (int i = 0; i < size; i++){
    cnt[z[i] - 'A']++;
  }

  int max = 0;
  int max_num = 0;
  for (int i = 0; i <= 25; i++){
    if (max <= cnt[i]){
      max = cnt[i];
      max_num = i;
    }
  }

  int q = -1;
  for (int i = 0; i <= 25; i++){
    if (max == cnt[i]){
      q++;
    }
  }

  if (q != 0){
    printf("?");
  }else {
    printf("%c", max_num + 'A');
  }
  
  return 0;
}