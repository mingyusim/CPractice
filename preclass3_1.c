/* Example 4-21
  while문에서 continue문 사용 시 주의 사항 */
#include <stdio.h>

int main() {
  int iValue, iCount;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &iValue);

  iCount = 1;
  while (iCount <= 9) {
    if (iCount == 5) {
      iCount++;
      continue;
    }
    printf("%d * %d = %d\n", iValue, iCount, iValue * iCount);
    iCount++;
  }
  return 0;
}
