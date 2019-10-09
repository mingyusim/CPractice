#include <stdio.h>

int main() {
  int iValue = 0;   //0대신 1으로도 해보기 => 논리연산 확실히 알아두기
  int iResult;

  iResult = (iValue > 0) && ++iValue;   //앞에서 0이 되어, ++iValue는 생략 / iResult = 0
  printf("iValue = %d, iResult = %d\n", iValue, iResult);   //0, 0

  iResult = (iValue == 0) && ++iValue;  //And, 참이므로 1,1 / iResult=1
  printf("iValue = %d, iResult = %d\n", iValue, iResult);   //1, 1

  iResult = (iValue > 0) || ++iValue;   //OR, 마찬가지로 생략 / iResult = 1
  printf("iValue = %d, iResult = %d\n", iValue, iResult);   //1, 1

  iResult = (iValue == 0) || ++iValue;  //OR, 1 OR 2 = 1 / iResult = 1
  printf("iValue = %d, iResult = %d\n", iValue, iResult);   //2, 1

  return 0;
}
