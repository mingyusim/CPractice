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

  temp = *pValue1;  //value1에 저장된 주소로 찾아가 그 값을 읽어 temp에 저장
  *pValue1 = *pValue2;
  /*value2에 저장된 주소로 찾아가 그 값을 읽어
  value1에 젖아된 주소로 찾아가 그 값을 할당*/
  *pValue2 = temp;  //temp에 저장된 값을 읽어 value2에 저장된 주소로 찾아가 그 값을 할당

  printf("[SWAP #2] *pValue1 = %d, *pValue2 = %d\n\n", *pValue1, *pValue2);
}
