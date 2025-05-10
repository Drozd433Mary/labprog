#include <stdio.h>
int main() {
	float t;
	char s;
	printf("Введите температуру и символ c или f:");
	scanf("%f%c", &t, &s);

	if (s == 'c' || s == 'C') {
		float r = (t*1.8)+32;
		printf("%.1ff\n", r);
}	else if (s == 'f' || s == 'F') {
		float e = (t-32)/1.8;
		printf("%.1fc\n", e);
}	else
		printf("ERROR\n");
}
