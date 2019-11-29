#include <stdio.h>

void printValue(int value);
void printValue2(int value[], int count);
void printValue3(int *value, int count);

int main() {
  /*1�ܰ� : �迭�� ������ ���� �Լ��� ����
  call by value*/
  int iValue[5] = {10, 20, 30, 40, 50};

  for(int i=0; i<5; i++) {
    printValue(iValue[i]);
  }

  /*2�ܰ� : �迭�� �ּҸ� �Լ��� �μ�(�迭)�� ����
  call by reference*/
  printValue2(iValue, 5);

  //3�ܰ� : �迭�� �ּҸ� �Լ��� �μ�(������)�� ����
  printValue3(iValue, 5);
}

void printValue(int value) {
  printf("value1 = %d\n", value);
}

void printValue2(int value[], int count) {
  for(int i=0; i<count; i++) {
    printf("value2 = %d\n", value[i]);
  }
}

void printValue3(int *value, int count) {
  for(int i=0; i<count; i++) {
    printf("value3 = %d\n", value[i]);
  }
}
