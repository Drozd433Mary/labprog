#include <stdio.h>
int main() {
	int a;
	int k;
	int s=0;
	int n;
	int rek;
	printf("number pls:\n");
	scanf("%d", &a);
	for (n=a;n!=0;) {
		n = (n/10);
		rek = (n %10);
		if (rek>s) {
			s = rek;
			printf("%d\n", s);
		}
	}
}
