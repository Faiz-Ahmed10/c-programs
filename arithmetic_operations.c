#include<stdio.h>

int main() {
	int a, b, c, d, e, f, g;
	printf("Enter the value of a:");
	scanf("%d", &a);	
	printf("Enter the value of b:");
	scanf("%d", &b);	
	c = a+b;
	d = a-b;
	e = a*b;
	f = a/b;
	g = a%b;
	printf("\nSum of a and b is: %d", c);
	printf("\nSubtraction of a and b is: %d", d);
	printf("\nMultiplication of a and b is: %d", e);
	printf("\nDivision of a and b is: %d", f);
	printf("\nRemainder of a and b is: %d", g);
	return 0;
}
