#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  if (a>=620 && a<=780) printf("Red");
  else if (a>=590 && a<620) printf("Orange");
  else if (a>=570 && a<590) printf("Yellow");
  else if (a>=495 && a<570) printf("Green");
  else if (a>=450 && a<495) printf("Blue");
  else if (a>=425 && a<450) printf("Indigo");
  else if (a>=380 && a<425) printf("Violet");

  return 0;
}