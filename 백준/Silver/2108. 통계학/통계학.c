#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  int num1 = *(int *)a;
  int num2 = *(int *)b;
  if(num1 < num2){
    return -1;
  }else {return 1;}
  return 0;
}

int main(void) {

  int a;
  scanf("%d", &a);
  int b[a];
  for (int i=0; i < a; i++){
    scanf("%d", &b[i]);
  }

  int q = 0, w, e, r;

  double avg;
  for (int i=0; i < a; i++){
    q += b[i];
  }
  avg = (double)q / a;
  if (avg > -1 && avg < 0){ avg = 0;}
  
  int c[a];
  for (int i=0; i < a; i++){
    c[i] = b[i];
  }
  qsort(c, a, sizeof(int), compare);
  if (a == 1){
    w = c[0];
  }else {w = c[a/2];}

  int d[8001] = {0, };
  for (int i=0; i < a; i++){
    d[b[i] + 4000]++;
  }
  int cnt_max = 0;
  int max_num = 0;
  for (int i=0; i < 8001; i++){
    if (d[i] > cnt_max){
      cnt_max = d[i];
      max_num = i;
      e = i - 4000;
    }
  }
  for (int i=0; i < 8001; i++){
    if (d[i] == cnt_max && i != max_num){
      e = i - 4000;
      break;
    }
  }
  if (a == 1){
    e = b[0];
  }

  int min = b[0], max = b[0];
  for (int i=0; i < a; i++){
    if (b[i] > max){
      max = b[i];
    }
    if (b[i] < min){
      min = b[i];
    }
  }
  r = max-min;

  printf("%.f\n%d\n%d\n%d", avg, w, e, r);
  
  return 0;
}