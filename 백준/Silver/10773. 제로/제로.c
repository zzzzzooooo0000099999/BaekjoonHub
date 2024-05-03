#include <stdio.h>

int main(void) {

  int max_stack_size;
  scanf("%d", &max_stack_size);
  int a[max_stack_size];
  for (int i = 0; i < max_stack_size; i++){
    scanf("%d", &a[i]);
  }

  int stack[max_stack_size];
  int top = -1;
  for (int i = 0; i < max_stack_size; i++){
    if (a[i] != 0){
      stack[++top] = a[i];
    }else {stack[top--];}
  }

  int sum = 0;
  for (int i = 0; i <= top; i++){
    sum += stack[i];
  }
  printf("%d", sum);
  
  return 0;
}