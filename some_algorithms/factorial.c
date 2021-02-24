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
	int s = 0;
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		s = s + factorial(i);
	}
	printf("%d\n", s);

}