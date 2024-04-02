#include <stdio.h>

int main(void) {

  char a[2];
  scanf("%s", a);

  if (a[0] == 'A' && a[1] == '+'){
    printf("4.3");
  }else if (a[0] == 'A' && a[1] == '0'){
    printf("4.0");
  }else if (a[0] == 'A' && a[1] == '-'){
    printf("3.7");
  }else if (a[0] == 'B' && a[1] == '+'){
    printf("3.3");
  }else if (a[0] == 'B' && a[1] == '0'){
    printf("3.0");
  }else if (a[0] == 'B' && a[1] == '-'){
    printf("2.7");
  }else if (a[0] == 'C' && a[1] == '+'){
    printf("2.3");
  }else if (a[0] == 'C' && a[1] == '0'){
    printf("2.0");
  }else if (a[0] == 'C' && a[1] == '-'){
    printf("1.7");
  }else if (a[0] == 'D' && a[1] == '+'){
    printf("1.3");
  }else if (a[0] == 'D' && a[1] == '0'){
    printf("1.0");
  }else if (a[0] == 'D' && a[1] == '-'){
    printf("0.7");
  }else {
    printf("0.0");
  }
  
  return 0;
}