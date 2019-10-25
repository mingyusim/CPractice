/* 이 유형의 시험문제는 반드시 나온다!.
Continue문 시험문제에 반드시 낼거다!*/
#include <stdio.h>

int main() {
  int dan, iCount = 1; // 조건문, 초기값 셋팅해야됨

  printf("단을 입력하세요 : ");
  scanf("%d", &dan);

  while(iCount <= 9) {
    if (iCount == 5) {
      iCount ++;  // 이 증감값을 넣지 않으면 실행이 4에서 멈춤
      continue;
    }
    printf("%d * %d = %d\n", dan, iCount, dan*iCount);
    iCount ++;
  }

  /*for (int i = 1; i <= 9; i++) {
    if (i == 5) {
      // break;
      continue; // 아래를 pass하고 다음 중감값으로
    }
    printf("%d * %d = %d\n", dan, i, dan*i);
  }*/
  printf("반복문을 벗어났습니다.\n");

  return 0;
}
