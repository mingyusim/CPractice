#include <stdio.h>

int main() {
  char sNation[] = "KOREA";
  char *strNation = "AMERICA";

  sNation[4] = 'M';
  printf("���ڿ��� = %s\n", sNation); //KOREA
  printf("���� = %c\n", sNation[1]); //0
  printf("���� = %c\n", *sNation);  //K
  printf("���ڿ��� = %s\n", strNation); //

  printf("sNation = %s\n", sNation);
  printf("strNation = %s\n", strNation);

  sNation[0] = 'S';
  sNation[1] = 'E';
  sNation[2] = 'O';
  sNation[3] = 'U';
  sNation[4] = 'L';
  sNation[5] = '\0';

  strNation = "SEOUL";

  printf("sNation = %s\n", sNation);
  printf("strnation = %s\n", strNation);

  return 0;
}
