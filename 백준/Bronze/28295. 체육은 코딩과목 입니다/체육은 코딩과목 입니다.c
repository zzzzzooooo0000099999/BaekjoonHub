#include <stdio.h>

int main(void) {

  int a[10];
  scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7] ,&a[8], &a[9]);

  int num = 0;
  for(int i = 0; i < 10; i++){
    if (a[i] == 1) num += 1;
    else if(a[i] == 2) num += 2;
    else num += 3;
  }
  num = num%4;
  if (num==0) printf("N");
  else if (num==1) printf("E");
  else if (num==2) printf("S");
  else printf("W");
  
  return 0;
}