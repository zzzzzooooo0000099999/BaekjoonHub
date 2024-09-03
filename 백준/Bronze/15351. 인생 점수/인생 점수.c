#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  scanf("%d", &a);
  getchar();
  int b[a];
  for (int i = 0; i < a; i++){
    b[i] = 0;
    char c[31];
    fgets(c, 31, stdin);
    if (c[strlen(c)-1] == '\n'){
      c[strlen(c)-1] = '\0';
    }
    for (int j = 0; j < strlen(c); j++){
      if (c[j] >= 'A' && c[j] <= 'Z'){
        b[i] += c[j] - 'A' + 1;
      }
    }
  }

  for (int i = 0; i < a; i++){
    if (b[i] == 100) printf("PERFECT LIFE\n");
    else printf("%d\n", b[i]);
  }
  
  return 0;
}