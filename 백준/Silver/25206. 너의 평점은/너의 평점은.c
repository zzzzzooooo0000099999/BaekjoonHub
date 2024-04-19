#include <stdio.h>

int main(void) {

  char a[20][51] = {NULL, };
  double b[20] = {0, };
  char c[20][3] = {NULL, };
  double d[20] = {0, };

  for (int i = 0; i < 20; i++){
    scanf("%s %lf %s", a[i], &b[i], c[i]);
  }

  for (int i = 0; i < 20; i++){
    if (c[i][0] == 'A' && c[i][1] == '+'){
      d[i] = 4.5;
    }else if (c[i][0] == 'A' && c[i][1] == '0'){
      d[i] = 4.0;
    }else if (c[i][0] == 'B' && c[i][1] == '+'){
      d[i] = 3.5;
    }else if (c[i][0] == 'B' && c[i][1] == '0'){
      d[i] = 3.0;
    }else if (c[i][0] == 'C' && c[i][1] == '+'){
      d[i] = 2.5;
    }else if (c[i][0] == 'C' && c[i][1] == '0'){
      d[i] = 2.0;
    }else if (c[i][0] == 'D' && c[i][1] == '+'){
      d[i] = 1.5;
    }else if (c[i][0] == 'D' && c[i][1] == '0'){
      d[i] = 1.0;
    }else if (c[i][0] == 'F'){
      d[i] = 0.0;
    }else if (c[i][0] == 'P'){
      b[i] = 0.0;
      d[i] = 0.0;
    }
  }

  double sum = 0;
  double sco = 0;
  for (int i = 0; i < 20; i++){
    sum += b[i] * d[i];
    sco += b[i];
  }
  printf("%lf", (sum/sco));
  
  return 0;
}