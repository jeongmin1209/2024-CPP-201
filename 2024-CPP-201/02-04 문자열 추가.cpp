#include <stdio.h>
#include <string>

void main(void)
{
	char str[100] = "Juyoung";
	// 문자열 추가
	strcat(str, " is pretty");

	printf("%s ", str);
}