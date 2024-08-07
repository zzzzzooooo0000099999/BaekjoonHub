#include <stdio.h>
#include <string.h>

int main(void) {

  while(1) {
    char a[500];
    fgets(a, 500, stdin);
    if (a[0] == '#') {
      break;
    }else {
      int cnt = 0;
      for (int i=0; i<=strlen(a); i++){
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') {
          cnt++;
        }
      }printf("%d\n", cnt);
    }
  }
  
  return 0;
}