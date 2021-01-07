#include<stdio.h>

int factorial(n) {
	if (n==1) {
		return 1;
	}
	else {
		return n  * factorial(n-1);
	}
}

int main() {
	int n;
	float x = 0;
	float s = 0;
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		x = x + i;
		s = s + x/factorial(i);

	}
	printf("%f\n", s);

}