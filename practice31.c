#include <stdio.h>

int main() {
  int iValue[5] = {10, 20, 30, 40, 50};
  int *pInt = iValue;
  int iCount;

  for(iCount = 0; iCount < 5; iCount++) {
    printf("&iValue[%d] = %p, ", iCount, &iValue[iCount]);
    printf("iValue[%d] = %d\n", iCount, iValue[iCount]);
    printf("(pInt + %d) = %p, ", iCount, pInt + iCount);
    printf("*(pInt + %d) = %d\n\n\n", iCount, *(pInt + iCount));
  }

  return 0;
}
