#include <stdio.h>

int Queue[10000000];
int Front = -1, Rear = -1;

void push(int data){
  Queue[++Rear] = data;
}
void pop(){
  Front++;
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
  for(int i = 1; i <= a; i++){
    push(i);
  }
  while(1){
    if (size() == 1){
      break;
    }
    pop();
    push(front());
    pop();
  }
  printf("%d", front());
  
  return 0;
}