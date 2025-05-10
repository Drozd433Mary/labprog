#include  <stdio.h>
int main() {
	int s=0;
	int n;
	int a;
	int k;
	printf("go number:");
	scanf("%d", &a);
	for (n=a;n!=0;n=n/10){
		k = (n%10);
		s = (s+k);
		printf("%d", s);
		break;
	}

}
