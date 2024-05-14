#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Queue[10000000];
int Front = -1, Rear = -1;

void push(int data){
  Queue[++Rear] = data;
}
void pop(){
  printf("%d\n", Queue[++Front]);
}
int front(){
  return Queue[Front+1];
}
int size(){
  return Rear-Front;
}
int empty(){
  return Front==Rear ? 1:0;
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
    }else if (b[i][0] == 'f' && b[i][1] == 'r'){
      if (empty()){
        printf("-1\n");
      }else {printf("%d\n", front());}
    }else if (b[i][0] == 'b' && b[i][1] == 'a'){
      if (empty()){
        printf("-1\n");
      }else {printf("%d\n", Queue[Rear]);}
    }
  }

  return 0;
}