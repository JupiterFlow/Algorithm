#include <stdio.h>

int main(void) {
	int n = 0, x = 0, i = 0, a = 0;
	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a < x)
			printf("%d ", a);
	}
	return 0;
}