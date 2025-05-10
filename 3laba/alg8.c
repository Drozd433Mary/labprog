#include <stdio.h>

int main() {
	int n;
	int s = 1;
	int i = 1;
	printf("number");
	scanf("%d", &n);
	for (i<=n;i++;) {
		s = (s*i);
		printf("%d\n", s);
		break;
	}
}
