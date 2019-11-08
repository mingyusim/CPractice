#include <stdio.h>
#include <windows.h>

#define _CRT_SECURE_NO_WARNINGS

int deposit(int mym);
int withdraw(int mym, char pw[100]);
void setpassword(char pw[100]);
void checkpassword(char pw[100]);
int home();
void check(int mym);

int main() {
   int menu, minmoney, mymoney = 100000;
   char password[100] = "0000";

   do {
      menu = home();

      switch (menu) {
      case 1:
         mymoney = deposit(mymoney);
         break;

      case 2:
         mymoney = withdraw(mymoney, password);
         break;

      case 3:
         check(mymoney);
         break;

      case 4:
         setpassword(password);
         break;

      }
   } while (menu != 5);

   return 0;
}

int home() {
   int menu;

   printf("====================\n");
   printf("<메뉴를 선택하세요>\n");
   printf("1번 : 입금\n");
   printf("2번 : 출금\n");
   printf("3번 : 잔액조회\n");
   printf("4번 : 비밀번호변경\n");
   printf("5번 : 종료\n");
   printf("====================\n");
   printf("입력 : ");
   scanf("%d", &menu);

   if (menu < 1 || menu > 5) {
      system("cls");
      printf("1번에서 5번의 메뉴중에 하나를 선택해주세요.\n\n");
      return home();
   }

   return menu;
}

int deposit(int mym) {
   int addm;

   system("cls");
   printf("입금할 금액을 입력하세요 : ");
   scanf("%d", &addm);

   mym += addm;

   system("cls");
   printf("입금 후 잔액은 %d원 입니다.\n\n", mym);

   return mym;
}

int withdraw(int mym, char pw[100]) {
   int minm;
   checkpassword(pw);

   printf("출금할 금액을 입력하세요 : ");
   scanf("%d", &minm);

   while (mym < minm) {
      system("cls");
      printf("잔액보다 출금할 금액이 더 큽니다.\n");
      printf("출금할 금액을 다시 입력해주세요 : ");
      scanf("%d", &minm);
   }
   mym -= minm;

   system("cls");
   printf("출금 후 잔액은 %d원 입니다.\n\n", mym);

   return mym;
}

void check(int mym) {
   system("cls");
   printf("현재 잔액은 %d원 입니다.\n\n", mym);
}

void setpassword(char pw[100]) {
   char cpw[100];
   checkpassword(pw);

   printf("변경할 비밀번호를 입력해주세요 : ");
   scanf("%s", cpw);
   strcpy(pw, cpw);

   system("cls");
   printf("비밀번호가 변경되었습니다.\n\n");
}

void checkpassword(char pw[100]) {
   char ipw[100];

   system("cls");
   printf("현재 비밀번호를 입력해주세요 (초기 비밀번호 : 0000) : ");
   scanf("%s", ipw);

   while (strcmp(pw, ipw) != 0) {
      system("cls");
      printf("비밀번호가 틀렸습니다.\n");
      printf("비밀번호를 다시 입력해주세요 : ");
      scanf("%s", ipw);
   }

   system("cls");
   printf("비밀번호가 확인되었습니다.\n\n");
}
