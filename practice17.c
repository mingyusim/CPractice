#include <stdio.h>
#include <windows.h>

int main() {
  int menu, ans, addmoney, minmoney, mymoney = 100000;

  home :
  printf("====================\n");
  printf("<�޴��� �����ϼ���>\n1�� : �Ա�\n2�� : ���\n3�� : �ܾ���ȸ\n4�� : ����\n");
  printf("====================\n");
  printf("�Է� : ");
  scanf("%d", &menu);
  system("cls");

  switch(menu) {
    case 1:
      //�Ա�ȭ��
      printf("--------------------\n");
      printf("�Ա��� �ݾ��� �Է��ϼ��� : ");
      scanf("%d", &addmoney);   // 50000

      //�ܾ׿� �ݾ� ���ϱ�
      mymoney += addmoney;

      //���
      system("cls");
      printf("�Ա� �� �ܾ��� %d�� �Դϴ�.\n\n", mymoney);
      goto end;

    case 2:
      //���ȭ��
      restart :
      printf("--------------------\n");
      printf("����� �ݾ��� �Է��ϼ��� : ");
      scanf("%d", &minmoney);

      if(mymoney < minmoney) {
        printf("�ܾ׺��� ����� �ݾ��� �� Ů�ϴ�.\n");
        system("cls");
        printf("����� �ݾ��� �ٽ� �Է����ּ���.\n\n");
        goto restart;
      } else {
        //�ܾ׿� �ݾ� ����
        mymoney -= minmoney;

        //���
        system("cls");
        printf("��� �� �ܾ��� %d�� �Դϴ�.\n", mymoney);
        goto end;
      }

    case 3:
      //��ȸȭ��
      system("cls");
      printf("���� �ܾ��� %d�� �Դϴ�.\n\n", mymoney);
      goto end;

    case 4:
      //����ȭ��
      system("cls");
      printf("�ŷ��� �����մϴ�.\n\n");
      break;

    default :
      system("cls");
      printf("1������ 4���� �޴��߿� �ϳ��� �������ּ���.\n\n");
      goto home;
  }

  end :
  printf("====================\n");
  printf("�ŷ��� ����Ͻðڽ��ϱ�?\n1�� : ��\n2�� : �ƴϿ�\n");
  printf("====================\n");
  printf("�Է� : ");
  scanf("%d", &ans);

  switch(ans) {
    case 1:
      system("cls");
      printf("\n���۸޴��� ���ư��ϴ�.\n\n");
      goto home;

    case 2:
      system("cls");
      printf("\n�ŷ��� �����մϴ�.\n\n");
      break;

    default :
      system("cls");
      printf("\n�ٽ� �Է����ּ���.\n\n");
      goto end;
  }

  return 0;
}
