#include <stdio.h>
#include <string.h>

int main(void) {

  while(1) {
    char a[1000];
    fgets(a, 1000, stdin);
    if (a[0]=='E' && a[1]=='N' && a[2]=='D') {
      break;
    }else {
      for (int i=strlen(a)-2; i>=0; i--){
        printf("%c", a[i]);
      }printf("\n");
    }
  }
  return 0;
}