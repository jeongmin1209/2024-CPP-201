﻿#include <stdio.h>
#include <string.h>

void main(void)
{
	char str[100] = { "Juyoung" };
	char str2[100];

	strcpy(str2, str);

	printf("%s", str2);
}