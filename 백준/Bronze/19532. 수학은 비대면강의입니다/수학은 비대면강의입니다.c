#include <stdio.h>

int main(void) {

  float a, b, c, d, e, f;
  scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

  float x, y;
  y = (c - (a*f)/d)/(b - (a*e)/d);
  x = (f - (e*y))/d;

  printf("%.f %.f", x, y);
  
  return 0;
}