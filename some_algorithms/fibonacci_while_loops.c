#include <stdio.h>

int main() {
	int x = 0;
	int y = 1;
	int z;
	int n = 300;
	while (x < n) {
		printf("%d\n", x);
		x = x + y;
		printf("%d\n", y);
		y = y + x;
	}
	return 0;
}
