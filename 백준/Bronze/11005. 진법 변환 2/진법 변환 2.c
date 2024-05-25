#include <stdio.h>
#include <math.h>

int main(void) {

  long long a, b;
  scanf("%lld %lld", &a, &b);
  char c[100000] = {NULL, };

  int q = 1;
  int num;
  while(1){
    if(a < (long long)pow(b, q)){

      num = q;
      break;
    }
    q++;
  }
  
  int cnt = 0;
  while(1){

    if (a / (long long)pow(b, num-1) >= 0 && a / (long long)pow(b, num-1) <= 9){
      c[cnt] = a / (long long)pow(b, num-1) + 48;
    }else {c[cnt] = a / (long long)pow(b, num-1) + 55;}
    a = a % (long long)pow(b, num-1);
    cnt++;
    num--;
    if (num == 0){
      break;
    }
  }
  
  int size;
  for(size = 0; c[size] != NULL; size++);
  for(int i = 0; i < size; i++){
    printf("%c", c[i]);
  }
  
  return 0;
}