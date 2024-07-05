#include <stdio.h>
#include <string.h>

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a];
  for (int i = 0; i < a; i++){
    b[i] = 0;
  }
  char alp[a][1001];
  for (int i = 0; i < a; i++){
    scanf(" %s", alp[i]);
  }

  for (int i = 0; i < a; i++){
    int cnt[26] = {0, };
    for (int j = 0; j < strlen(alp[i]); j++){
      cnt[alp[i][j] - 'A']++;
    }
    for (int j = 0; j < 26; j++){
      if (cnt[j] == 0){
        b[i] +='A' + j;
      }
    }
  }

  for (int i = 0; i < a; i++){
    printf("%d\n", b[i]);
  }
  
  return 0;
}