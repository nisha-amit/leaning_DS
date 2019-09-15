#include<stdio.h>
int main() {
	printf("ABC\n");

	goto Label1;

	printf("ABC2\n");

Label1:
	printf("in label 1\n");
Label2:
	printf("in label 2\n");
Label3:
	printf("in label 3\n");
	return 1;
}