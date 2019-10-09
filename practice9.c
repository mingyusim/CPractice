#include <stdio.h>

int main() {
  int def = 12;   //기본값
  int mypass = 38;  //패스워드
  int result;

  printf("현재 문은 잠겨있습니다.\n");
  result = def^mypass;
  printf("현재 문의 키값은 %d입니다.\n", result);  //42

  printf("문을 열려면 패스워드를 입력하세요.\n");
  printf("패스워드 입력 : ");
  scanf("%d", &mypass);

  if(mypass == 38) {
    result = result^mypass;
    printf("\n문이 열렸습니다.\a \n");
    printf("현재 문의 키값은 %d입니다 \n", result);   //12
    home :

    printf("스르륵~~\n");
    printf("문이 잠겼습니다.\a \n");
    result = result^mypass;
    printf("현재 문의 키값은 %d입니다.\n", result);   //42
  } else {
      printf("패스워드가 잘못되었습니다.\n");
      printf("다시 입력하세요.\n");
      goto home;
    }

  return 0;
}
