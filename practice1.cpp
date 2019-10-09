#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("%d \n", 65);	// 10진수 출력
	printf("%X \n", 65);	// 16진수 출력
	printf("%x \n", 65);	// 8진수 출력
	printf("%o \n", 65);	// 8진수 출력
	printf("%c \n", 'A');
	printf("%d \n", 'A');
	printf("%d \n", ' ');
	printf("%d \n", '\n');
	printf("%d \n", 'C');	// 문자C를 10진수로 출력
	int C = 256;
	printf("%d", C);		//변수 C의 값

	/*실수형*/
	printf("%f \n", 123.4);	//float 실수
	printf("%lf \n", 123.4);	//lf = double
	printf("%d \n", 123.4);	//lf = double

	system("pause");

	return 0;
}
