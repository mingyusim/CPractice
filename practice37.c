#include <stdio.h>

struct myBook {
  char title[20];
  char company[10];
  int price;
  int page;
};

int main() {
  int sum = 0;
  struct myBook b[3] = {{"삼국지", "경기", 10000, 100}, {"김지영", "수원", 14000, 90}, {"총균쇠", "대한", 30000, 600}};

  for(int i=0; i<3; i++) {
    printf("도서명 : %s\n", b[i].title);
    printf("출판사 : %s\n", b[i].company);
    printf("가격 : %d\n", b[i].price);
    printf("페이지 수 : %d\n\n", b[i].page);

    sum += b[i].price;
  }
  printf("도서의 전체 가격은 %d입니다.\n", sum);

  return 0;
}
