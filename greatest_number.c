#include<stdio.h>

int main() {
	int A, B;
	printf("Enter the value of A and B:");
	scanf("%d%d", &A, &B);

	if(A>B) 
		printf("%d is greater than %d", A, B);
	else 
		printf("%d is less than %d", A, B);
	return 0;
}
