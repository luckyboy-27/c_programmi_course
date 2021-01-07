#include <stdio.h>

int main() {
	int x = 0;
	int y = 1;
	int z;
	int n = 300;
	for (int i=0; i<=n; ++i) {
		printf("%d\n", x);
		x = y;
		y = z;
		z = x + y;			
	}
	return 0;
}
