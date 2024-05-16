#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 10000000

int Stack[MAX_STACK_SIZE];
int top = -1;

void push(int value){
  Stack[++top] = value;
}
int pop(){
  printf("%d\n", Stack[top--]);
}
int size(){
  return top + 1;
}
int empty(){
  return top<0 ? 1 : 0;
}

int main(void) {

  int a;
  scanf("%d", &a);
  char b[a][1000];
  for (int i = 0; i < a; i++){
    for (int j = 0; j < 1000; j++){
      b[i][j] = '\0';
    }
  }
  for (int i = 0; i < a; i++){
    scanf(" %[^\n]s", b[i]);
  }

  for (int i = 0; i < a; i++){
    if (b[i][0] == 'p' && b[i][1] == 'u'){
      char c[1000] = {NULL, };
      for (int j = 5; j < strlen(b[i]); j++){
        c[j-5] = b[i][j];
      }
      push(atoi(c));
    }else if (b[i][0] == 'p' && b[i][1] == 'o'){
      if (empty()){
        printf("-1\n");
      }else {pop();}
    }else if (b[i][0] == 's' && b[i][1] == 'i'){
      printf("%d\n", size());
    }else if (b[i][0] == 'e' && b[i][1] == 'm'){
      printf("%d\n", empty());
    }else if (b[i][0] == 't' && b[i][1] == 'o'){
      if (empty()){
        printf("-1\n");
      }else {printf("%d\n", Stack[top]);}
    }
  }

  return 0;
}