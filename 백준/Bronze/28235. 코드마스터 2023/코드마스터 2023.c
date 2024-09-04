#include <stdio.h>

int main(void) {

  char a[20];
  scanf("%s", a);

  if (a[0] == 'S') printf("HIGHSCHOOL");
  else if (a[0] == 'C') printf("MASTER");
  else if (a[0] == '2') printf("0611");
  else printf("CONTEST");
  
  return 0;
}