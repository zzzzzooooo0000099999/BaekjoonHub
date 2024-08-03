#include <stdio.h>
#include <string.h>

int main(void) {

  char a[5];
  scanf("%s", a);
  int b;
  scanf(" %d", &b);
  char c[b][5];
  for (int i=0; i<b; i++){
    scanf(" %s", c[i]);
  }
  int cnt=0;
  for (int i=0; i<b; i++){
    if (strcmp(a, c[i])==0){
      cnt++;
    }
  }printf("%d", cnt);

  return 0;
}