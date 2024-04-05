#include <stdio.h>

int main(void) {

  int q, w, e, r, a, s, d, f;

  scanf("%d %d %d %d %d %d %d %d", &q, &w, &e, &r, &a, &s, &d, &f);
  if (q == 1 && w == 2 && e == 3 && r == 4 && a == 5 && s == 6 && d == 7 && f == 8){
    printf("ascending");
  }else if(q == 8 && w == 7 && e == 6 && r == 5 && a == 4 && s == 3 && d == 2 && f == 1){
    printf("descending");
  }else{printf("mixed");}
  
  return 0;
}