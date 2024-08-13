#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int b[a][3];
  for (int i = 0; i < a; i++){
    scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
  }

  int c[a];
  for (int i = 0; i < a; i++){
    if (b[i][0]+b[i][2] < b[i][1]) c[i] = 1;
    else if (b[i][0]+b[i][2] > b[i][1]) c[i] = 2;
    else c[i] = 3;
  }

  for (int i = 0; i < a; i++){
    if (c[i] == 1) printf("advertise\n");
    else if (c[i] == 2) printf("do not advertise\n");
    else printf("does not matter\n");
  }
  
  return 0;
}