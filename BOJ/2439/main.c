#include <stdio.h>

int main(void) {
	short n = 0, i = 0,j=0;
	scanf("%hd", &n);
	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}