#include <stdio.h>

int main(void) {

  char z[15];
  scanf("%s", z);
  int size;
  for(size = 0; z[size] != '\0'; size++);

  int cnt = 0;
  for(int i = 0; i < size; i++){
    if (z[i] >= 'A' && z[i] <= 'C'){
      cnt += 3;
    }else if (z[i] >= 'D' && z[i] <= 'F'){
      cnt += 4;
    }else if (z[i] >= 'G' && z[i] <= 'I'){
      cnt += 5;
    }else if (z[i] >= 'J' && z[i] <= 'L'){
      cnt += 6;
    }else if (z[i] >= 'M' && z[i] <= 'O'){
      cnt += 7;
    }else if (z[i] >= 'P' && z[i] <= 'S'){
      cnt += 8;
    }else if (z[i] >= 'T' && z[i] <= 'V'){
      cnt += 9;
    }else if (z[i] >= 'W' && z[i] <= 'Z'){
      cnt += 10;
    }
  }printf("%d", cnt);
  
  return 0;
}