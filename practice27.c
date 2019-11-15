#include <stdio.h>

int main() {
  int iEngScore[2][5] = {{90,95,85,80,70}, {60,55,80,80,75}};
  int iSum, iMax, iMin, iCount1, iCount2;
  float fAverage;

  for(iCount1 = 0; iCount1 <2; iCount1++) {
    iSum = 0;
    iMax = iEngScore[0][0];
    iMin = iEngScore[0][0];

    for(iCount2 = 0; iCount2 <5; iCount2++) {
      iSum = iSum + iEngScore[iCount1][iCount2];

      if(iEngScore[iCount1][iCount2] > iMax) {
        iMax = iEngScore[iCount1][iCount2];
      }
      if(iEngScore[iCount1][iCount2] < iMin) {
        iMin = iEngScore[iCount1][iCount2];
      }
    }

    fAverage = (float)iSum / 5;

    printf("%d���� ������� = %.2f\n", iCount1 + 1, fAverage);
    printf("%d���� �ְ����� = %d\n", iCount1 + 1, iMax);
    printf("%d���� �������� = %d\n", iCount1 + 1, iMin);
  }

  return 0;
}
