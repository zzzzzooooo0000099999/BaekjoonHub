#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  
  int b[5];
  for(int i = 0; i < 5; i++){
    scanf("%d", &b[i]);
  }

  int cnt = 0;
  for(int i = 0; i < 5; i++){
    if(b[i] == a){
      cnt++;
    }
  }

  printf("%d", cnt);

  return 0;
}