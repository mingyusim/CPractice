#include <stdio.h>
#include <stdlib.h>

int main() {
	/*변수선언
	  할당*/
	int iValue;		//변수를 선언
	iValue = 10;     	//10을 iValue변수에 할당

	/*연산
	  출력*/
	iValue = iValue + 5;	//재할당

	printf("iValue의 값은 %d = \n", iValue);
	printf("iValue의 값은 %d = \n", 30);

	system("pause");
	return 0;
}
