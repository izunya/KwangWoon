#include <stdio.h>

void main()
{
	int i;
	int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (i = 0; i < 12; i++)
		printf("%02d은 %d일까지 있습니다.\n", i + 1, days[i]);
}
