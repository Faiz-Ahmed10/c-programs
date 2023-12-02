#include<stdio.h>

int main() {
	int a, b;
	printf("Enter the value of a and b:");
	scanf("%d%d", &a, &b);

	(a>b) ? printf("%d is greatest", a) : printf("%d is greatest", b);

	return 0;
}
