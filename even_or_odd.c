#include<stdio.h>

int main() {
	int a;
	printf("Enter the value of a:");
	scanf("%d", &a);

	if(a%2==0) 
		printf("The value of a is even.");
	else 
		printf("The vlaue of a is odd.");
	return 0;
}
