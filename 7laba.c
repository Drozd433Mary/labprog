#include <stdio.h>
#include <string.h>
int main(){
	char tex[] = "Jane is an English girl. She lives in the country. Jane has three pets. She likes them very much. They are cats. Their names are Snowy, Smoky, and Tiger. One is white, one is black, and one is black and white.";
	char bezprobelov[500];
	int a=0;
	int b=0;
	int count_probel=0;
	for (a=0; tex[a]!='\0';a++) {
		if (tex[a]!=' '){
			bezprobelov[b++]=tex[a];}
		else {
			count_probel++;}
	}
	bezprobelov[b]='\0';
	printf("%s", bezprobelov);
	printf("%d", count_probel);
	return 0;
}
