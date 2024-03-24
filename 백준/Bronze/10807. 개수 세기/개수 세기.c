#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int z[a];
  for (int i = 0; i < a; i++){
    scanf("%d", &z[i]);
  }
  
  int b;
  scanf("%d",&b);
  
  int cnt = 0;
  for (int i = 0; i < a; i++){
    if (z[i] == b){
      cnt++;
    }
  }printf("%d", cnt);
  
  return 0;
}