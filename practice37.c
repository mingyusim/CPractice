#include <stdio.h>

struct myBook {
  char title[20];
  char company[10];
  int price;
  int page;
};

int main() {
  int sum = 0;
  struct myBook b[3] = {{"�ﱹ��", "���", 10000, 100}, {"������", "����", 14000, 90}, {"�ѱռ�", "����", 30000, 600}};

  for(int i=0; i<3; i++) {
    printf("������ : %s\n", b[i].title);
    printf("���ǻ� : %s\n", b[i].company);
    printf("���� : %d\n", b[i].price);
    printf("������ �� : %d\n\n", b[i].page);

    sum += b[i].price;
  }
  printf("������ ��ü ������ %d�Դϴ�.\n", sum);

  return 0;
}
