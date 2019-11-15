#include <stdio.h>

int main() {
  int iEngScore[5];
  int iMax, iMin, iCount, iSum = 0;
  float fAverage;

  for(iCount = 0; iCount < 5; iCount++) {
    printf("%d번째 값을 입력하세요 : ", iCount + 1);
    scanf("%d", &iEngScore[iCount]);
  }

  iMax = iEngScore[0];
  iMin = iEngScore[0];

  for(iCount = 0; iCount < 5; iCount++) {
    iSum += iEngScore[iCount];

    if(iEngScore[iCount] > iMax) {
      iMax = iEngScore[iCount];
    }
    if(iEngScore[iCount] < iMin) {
      iMin = iEngScore[iCount];
    }
  }

  fAverage = (float)iSum / 5;

  printf("평균 = %.2f\n", fAverage);
  printf("최고 = %d\n", iMax);
  printf("최소 = %d\n", iMin);

  return 0;
}
