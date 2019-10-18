#include <stdio.h>
#include <windows.h>

int main() {
  int menu, ans, addmoney, minmoney, mymoney = 100000;

  home :
  printf("====================\n");
  printf("<메뉴를 선택하세요>\n1번 : 입금\n2번 : 출금\n3번 : 잔액조회\n4번 : 종료\n");
  printf("====================\n");
  printf("입력 : ");
  scanf("%d", &menu);
  system("cls");

  switch(menu) {
    case 1:
      //입금화면
      printf("입금할 금액을 입력하세요 : ");
      scanf("%d", &addmoney);   // 50000

      //잔액에 금액 더하기
      mymoney += addmoney;

      //출력
      system("cls");
      printf("입금 후 잔액은 %d원 입니다.\n\n", mymoney);
      goto end;

    case 2:
      //출금화면
      restart :
      printf("출금할 금액을 입력하세요 : ");
      scanf("%d", &minmoney);

      if(mymoney < minmoney) {
        printf("잔액보다 출금할 금액이 더 큽니다.\n");
        system("cls");
        printf("출금할 금액을 다시 입력해주세요.\n\n");
        goto restart;
      } else {
        //잔액에 금액 빼기
        mymoney -= minmoney;

        //출력
        system("cls");
        printf("출금 후 잔액은 %d원 입니다.\n\n", mymoney);
        goto end;
      }

    case 3:
      //조회화면
      system("cls");
      printf("현재 잔액은 %d원 입니다.\n\n", mymoney);
      goto end;

    case 4:
      //종료화면
      system("cls");
      printf("거래를 종료합니다.\n\n");
      goto back;

    default :
      system("cls");
      printf("1번에서 4번의 메뉴중에 하나를 선택해주세요.\n\n");
      goto home;
  }

  end :
  printf("====================\n");
  printf("거래를 계속하시겠습니까?\n1번 : 네\n2번 : 아니오\n");
  printf("====================\n");
  printf("입력 : ");
  scanf("%d", &ans);

  switch(ans) {
    case 1:
      system("cls");
      printf("시작메뉴로 돌아갑니다.\n\n");
      goto home;

    case 2:
      system("cls");
      printf("거래를 종료합니다.\n");
      break;

    default :
      system("cls");
      printf("다시 입력해주세요.\n\n");
      goto end;
  }

  back:

  return 0;
}
