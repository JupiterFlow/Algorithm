#include <stdio.h>

int main(void) {
	short a = 0, b = 0;
	while (1) {
		scanf("%hd %hd", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%hd\n", a + b);
	}
	return 0;
}