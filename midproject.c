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
   printf("<�޴��� �����ϼ���>\n");
   printf("1�� : �Ա�\n");
   printf("2�� : ���\n");
   printf("3�� : �ܾ���ȸ\n");
   printf("4�� : ��й�ȣ����\n");
   printf("5�� : ����\n");
   printf("====================\n");
   printf("�Է� : ");
   scanf("%d", &menu);

   if (menu < 1 || menu > 5) {
      system("cls");
      printf("1������ 5���� �޴��߿� �ϳ��� �������ּ���.\n\n");
      return home();
   }

   return menu;
}

int deposit(int mym) {
   int addm;

   system("cls");
   printf("�Ա��� �ݾ��� �Է��ϼ��� : ");
   scanf("%d", &addm);

   mym += addm;

   system("cls");
   printf("�Ա� �� �ܾ��� %d�� �Դϴ�.\n\n", mym);

   return mym;
}

int withdraw(int mym, char pw[100]) {
   int minm;
   checkpassword(pw);

   printf("����� �ݾ��� �Է��ϼ��� : ");
   scanf("%d", &minm);

   while (mym < minm) {
      system("cls");
      printf("�ܾ׺��� ����� �ݾ��� �� Ů�ϴ�.\n");
      printf("����� �ݾ��� �ٽ� �Է����ּ��� : ");
      scanf("%d", &minm);
   }
   mym -= minm;

   system("cls");
   printf("��� �� �ܾ��� %d�� �Դϴ�.\n\n", mym);

   return mym;
}

void check(int mym) {
   system("cls");
   printf("���� �ܾ��� %d�� �Դϴ�.\n\n", mym);
}

void setpassword(char pw[100]) {
   char cpw[100];
   checkpassword(pw);

   printf("������ ��й�ȣ�� �Է����ּ��� : ");
   scanf("%s", cpw);
   strcpy(pw, cpw);

   system("cls");
   printf("��й�ȣ�� ����Ǿ����ϴ�.\n\n");
}

void checkpassword(char pw[100]) {
   char ipw[100];

   system("cls");
   printf("���� ��й�ȣ�� �Է����ּ��� (�ʱ� ��й�ȣ : 0000) : ");
   scanf("%s", ipw);

   while (strcmp(pw, ipw) != 0) {
      system("cls");
      printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
      printf("��й�ȣ�� �ٽ� �Է����ּ��� : ");
      scanf("%s", ipw);
   }

   system("cls");
   printf("��й�ȣ�� Ȯ�εǾ����ϴ�.\n\n");
}
