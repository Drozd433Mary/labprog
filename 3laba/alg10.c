#include <stdio.h>
int main() {
	int s=0;
	int rek;
	int a;
	int  n;
	printf("number: ");
	scanf("%d", &a);
	for (n=a;n!=0;) {
		n = (n/10);
		break;
	}
	rek = (n%10);
	s = (s*10);
	s = (s+rek);
	printf("%d\n", s);
}
