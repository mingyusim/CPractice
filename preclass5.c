#include <stdio.h>

void function();  //function이라는 함수를 정의

int iValue1;  //iValue1이라는 이름을가진 변수를 외부에서 선언

int main() {
  int iValue2 = 20;
  int iValue3 = 30;

  iValue1 = 10;

  function();
  /*첫번째로 실행
  function()함수에서 iValue1은 main()에서 10이라고 정의해준 외부변수이므로
  iValue = 10이 되고, iValue2는 200이 되고, iValue3는 300이 된다.
  그 후 +10을 진행해 각각 20, 210, 310이 된다. */

  function();
  /*두번째로 실행
  iValue2는 정적변수이므로 210이라는 값이 저장된 상태에서 진행이되어 값이 그대로 남고
  iValue1또한 외부변수이므로 값이 그대로 남아 iValue1 = 20, iValue2 = 210이 되지만
  iValue3는 자동변수이므로 다시 300으로 정의가 되어 iValue3 = 300이 된다.
  iValue1값이 10 더해져 30이 되고, iValue2는 220. iValue3는 310이 되며 함수가 종료된다. */
  
  printf("\n[main] iValue1 = %d, iValue2 = %d, iValue3 = %d\n", iValue1, iValue2, iValue3);
  /*마지막으로 실행
  iValue1을 제외하곤 모두 해당 함수 내부에서 통용되는 변수값이므로, main에서 정의해준
  iValue2 = 20, iValue3 = 30이라는 값이 들어오고, iValue1은 외부변수이므로 계속 값이 저장된다.
  따라서 iValue1 = 30, iValue2 = 20, iValue3 = 30의 값을 가지게 된다. */

  return 0;
}

void function() {
  static int iValue2 = 200; //내부정적변수이므로, 함수가 끝나도 메모리값에 계속 남는 변수
  int iValue3 = 300;

  printf("\n[function] iValue1 = %d, iValue2 = %d, iValue3 = %d \n", iValue1, iValue2, iValue3);

  iValue1 = iValue1 + 10;
  iValue2 = iValue2 + 10;
  iValue3 = iValue3 + 10;
}
