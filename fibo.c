#include <stdio.h>

int main () {

	int i,f1 = 0, f2 = 1, f3 , n;

	printf("Geben Sie n ein:\n");
	scanf("%d", &n);

	printf("0 1 ");

	for (i=2; i<=n; i++) {
	
		f3 = f1 + f2;

		printf("%d ", f3);

		f1 = f2;
		f2 = f3;

	}

	printf("\n");

	return 0;

}
