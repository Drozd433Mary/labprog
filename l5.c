#include <stdio.h>
int schoto(unsigned int x){
	unsigned int y=~x;
	int count=0;
	while ((y&1)==0){
		y=y>>1;
		count++;}
	return count;
}
int main(){
unsigned int s;
int i;
scanf("%u", &s);
i=schoto(s);
printf("%d \n", i);}
