#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  scanf("%d", &a);

  int cnt = 0;
  int i = 1;
  while(1){
    char j[10000];
    sprintf(j, "%d", i);
    if (strstr(j, "666") != NULL) {
      cnt++;
    }
    if (cnt == a) {
      printf("%d", i);
      break;
    }
    i++;
  }
  
  return 0;
}