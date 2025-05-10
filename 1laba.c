#include <stdio.h> 
int main() {
	int w;
	printf("Enter your number:\n");
	scanf("%d", &w);
	if (w%400==0) {
		printf("YES\n");
	}
	else if (w%100==0) {
		printf("NO\n");
	}
	else {
	printf("NO\n");
	}
}
