#include <stdio.h>

int main(void) {

  float a;
  scanf("%f", &a);
  float z[(int)a];
  for (int i = 0; i < a; i++){
    scanf("%f", &z[i]);
  }
  
  float max = 0;
  for (int i = 0; i < a; i++){
    if (z[i] > max){
      max = z[i];
    }
  }

  for (int i = 0; i < a; i++){
    z[i] = z[i]/max*100;
  }

  float sum = 0;
  for (int i = 0; i < a; i++){
    sum = sum + z[i];
  }
  printf("%f", sum/a);
  
  return 0;
}