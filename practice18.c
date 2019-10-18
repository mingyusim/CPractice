#include <stdio.h>

int main() {
  //1에서 10까지의 합
  int num = 1;   //초기값
  int sum = 0;

  /* <<교수님 방식>>

  이 방법은 너무 복잡하다.
  home :
  if(num <= 10) {
    sum = sum + num;   //0+1+2+...+9+10
    num ++;   //증가값
    goto home;
  }

  따라서 이 방식으로 진행한다.
  for(num = 1; num <=10; num++) {
    sum = sum + num;
  } */

  do {
    sum = sum + num;
    num ++;
  } while(num <= 10);

  printf("%d까지의 합계는 %d입니다.\n", num-1, sum);

  return 0;
}
