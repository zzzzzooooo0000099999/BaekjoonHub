#include <stdio.h>

int main(void) {

  char z[100] = {NULL, };
  scanf("%s", z);
  int size;
  for (size = 0; z[size] != '\0'; size++);

  int cnt = size;

  for (int i = 0; i < size; i++){
    if (z[i] == 'c' && z[i+1] == '='){
      cnt--;
    }else if (z[i] == 'c' && z[i+1] == '-'){
      cnt --;
    }else if (z[i] == 'd' && z[i+1] == 'z' && z[i+2] == '='){
      cnt --;
    }else if (z[i] == 'd' && z[i+1] == '-'){
      cnt--;
    }else if (z[i] == 'l' && z[i+1] == 'j'){
      cnt--;
    }else if (z[i] == 'n' && z[i+1] == 'j'){
      cnt--;
    }else if (z[i] == 's' && z[i+1] == '='){
      cnt--;
    }else if (z[i] == 'z' && z[i+1] == '='){
      cnt--;
    }
  }printf("%d", cnt);
  
  return 0;
}