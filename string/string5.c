#include <stdio.h>

int main() {
	char name[10];
	printf("who are you?\n");
	fgets(name, 10, stdin);
	printf("Glad to meet you, %s\n", name);
	return 0;

}

