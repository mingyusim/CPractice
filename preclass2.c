#include <stdio.h>

int main() {
  int iValue, iCount, iSum = 0;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &iValue);

  for(iCount = 1; iCount <= iValue; iCount = iCount + 1) {
    iSum += iCount;
  }

  printf("1부터 %d까지의 합은 %d입니다.\n", iValue, iSum);

  return 0;
}
