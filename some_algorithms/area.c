#include<stdio.h>
#include<math.h>
#define _USE_MATH_DEFINES

float area_circle(float r) {
	float a = M_PI*r;
	return a;
}

int main() {
	float a;
	scanf("%f\n",&a);
	printf("%f\n", area_circle(a));
		
	return 0;
}
