#include <stdio.h>

void Swap(int *pValue1, int *pValue2);

int main() {
  int iValue1 = 10, iValue2 = 20;
  printf("[MAIN #1] iValue1 = %d, iValue2 = %d\n\n", iValue1, iValue2);

  Swap(&iValue1, &iValue2);
  printf("[MAIN #2] iValue1 = %d, iValue2 = %d\n", iValue1, iValue2);

  return 0;
}

void Swap(int *pValue1, int *pValue2) {
  int temp;

  printf("[SWAP #1] *pValue1 = %d, *pValue2 = %d\n", *pValue1, *pValue2);

  temp = *pValue1;  //value1�� ����� �ּҷ� ã�ư� �� ���� �о� temp�� ����
  *pValue1 = *pValue2;
  /*value2�� ����� �ּҷ� ã�ư� �� ���� �о�
  value1�� ���Ƶ� �ּҷ� ã�ư� �� ���� �Ҵ�*/
  *pValue2 = temp;  //temp�� ����� ���� �о� value2�� ����� �ּҷ� ã�ư� �� ���� �Ҵ�

  printf("[SWAP #2] *pValue1 = %d, *pValue2 = %d\n\n", *pValue1, *pValue2);
}
