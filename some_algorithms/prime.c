#include <stdio.h>

int main() {
	int x;
	for (int i=1; i<=20; i++) {
		x = 0;
		for (int j=1; j<=i; j++) {
			if (i%j == 0) {
				x++; 
			}
		}
		if (x==2) {
			printf("%d is prime\n", i);
		}
	}	
	return 0;
}
