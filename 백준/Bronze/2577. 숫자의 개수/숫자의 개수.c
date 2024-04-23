#include <stdio.h>

int main(void) {

  int q, w, e;
  scanf(" %d\n%d\n%d" , &q, &w, &e);
  int r = q*w*e;
  char a[10];
  
  sprintf(a, "%d", r);

  int b[10] = {0, };
  for (int i = 0; i < 10; i++){
    if (a[i] == '0'){
      b[0]++;
    }else if (a[i] == '1'){
      b[1]++;
    }else if (a[i] == '2'){
      b[2]++;
    }else if (a[i] == '3'){
      b[3]++;
    }else if (a[i] == '4'){
      b[4]++;
    }else if (a[i] == '5'){
      b[5]++;
    }else if (a[i] == '6'){
      b[6]++;
    }else if (a[i] == '7'){
      b[7]++;
    }else if (a[i] == '8'){
      b[8]++;
    }else if (a[i] == '9'){
      b[9]++;
    }else if (a[i] == '\0'){
      break;
    }
  }
  for (int i = 0; i < 10; i++){
    printf("%d\n", b[i]);
  }
  
  return 0;
}