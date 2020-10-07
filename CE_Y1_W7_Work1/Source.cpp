#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0;
	char str[1000];
	scanf("%[^\n]", str);
	while (str[i] != '\0')
	{
		if (i % 10 == 0 && i != 0)
		{
			printf("\n");
		}
		printf("%c", str[i]);
		
		i++;
	}
	return 0;
}