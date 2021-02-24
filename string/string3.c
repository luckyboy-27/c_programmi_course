#include <stdio.h>

int main() {
	int alpha, code;
	
	for (alpha='A'; alpha<='Z'; alpha++) {
		for (code=1; code<=10; code++) {
			printf("%c%d\t", alpha, code);
		}
		putchar('\n');
	}
	return 0;
}
