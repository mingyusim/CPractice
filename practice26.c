#include <stdio.h>

int main() {
  int iEngScore[5];
  int iMax, iMin, iCount, iSum = 0;
  float fAverage;

  for(iCount = 0; iCount < 5; iCount++) {
    printf("%d��° ���� �Է��ϼ��� : ", iCount + 1);
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

  printf("��� = %.2f\n", fAverage);
  printf("�ְ� = %d\n", iMax);
  printf("�ּ� = %d\n", iMin);

  return 0;
}
