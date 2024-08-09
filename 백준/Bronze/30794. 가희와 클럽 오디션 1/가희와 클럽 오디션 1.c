#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  char b[10];
  scanf("%d %s", &a, b);

  if (b[0]=='m') printf("%d", a*0);
  else if (b[0]=='b') printf("%d", a*200);
  else if (b[0]=='c') printf("%d", a*400);
  else if (b[0]=='g') printf("%d", a*600);
  else printf("%d", a*1000);
  
  return 0;
}