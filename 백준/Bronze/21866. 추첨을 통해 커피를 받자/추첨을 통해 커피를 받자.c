#include <stdio.h>

int main(void) {

  int a[2], b[2], c[2], d[2], e;
  scanf("%d %d %d %d %d %d %d %d %d", &a[0], &a[1], &b[0], &b[1], &c[0], &c[1], &d[0], &d[1], &e);

  int sum = a[0]+a[1]+b[0]+b[1]+c[0]+c[1]+d[0]+d[1]+e;

  if (a[0]>100 || a[1]>100 || b[0]>200 || b[1]>200 || c[0]>300 || c[1]>300 || d[0]>400 || d[1]>400 || e>500){
    printf("hacker");
  }else if (sum >= 100){
    printf("draw");
  }else printf("none");

  return 0;
}