// Author Peter Adamson

#include <stdio.h>
#include <string.h>

void four_stars(char *start){
	int i;
	for(i = 0; i < 4; i++){
		start[i] = '*';
	}
}

int main(){
	char test1[] = "test";
	char test2[] = "tes";
	char test3[] = "test test";
	four_stars(test1);
	four_stars(test2);
	four_stars(test3);
	printf("%s\n",test1);
	printf("%s\n",test2);
	printf("%s\n",test3);
	return 1;
}
