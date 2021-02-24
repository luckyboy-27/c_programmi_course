#include <stdio.h>
#include <stdlib.h>


float rand1() {
	return rand() * 1/RAND_MAX;
}

int main() {
	int num_heads = 0;
	int num_tails = 0;
	int n = 100000000;
	for (int i=0; i<n; i++) {
		float count  = rand1();
		if (count>0.5) {
			num_heads++;
		}
		else {
			num_tails++;
		}
	}
	printf("%d %d ", num_heads, num_tails);	
	return 0;
}