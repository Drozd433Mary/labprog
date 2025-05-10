#include <stdio.h>
int main() {
	int k=0;
	int m=1;
	int n;
	printf("pls number: ");
	scanf("%d", &n);
	for (;m<=n;k++) {
		m=(m*2);
		printf("%d", k-1);
		break;
	}
}
