#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  char b[a];
  scanf("%s", b);
  int cnt_a=0, cnt_b=0;
  for(int i=0; i<a; i++){
    if(b[i]=='A') cnt_a++;
    else cnt_b++;
  }
  if (cnt_a>cnt_b){printf("A");}
  else if (cnt_a==cnt_b){printf("Tie");}
  else {printf("B");}

  return 0;
}