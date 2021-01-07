#include<stdio.h>

int ucln(a,b) {
	if (a==0) {
		return b;
	}
	else if (b==0) {
		return a;
	}
	else {
		if (a>b) {
			return ucln(a % b,b);
		}
		else {
			return ucln(b % a, a);
		}
	}
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", ucln(a,b));

}