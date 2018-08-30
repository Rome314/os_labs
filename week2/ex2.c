#include <stdio.h>
#include <string.h>
int main(){

	char input[100];
	gets(input);
	int i = 0;
	int len = strlen(input);
	
	while (i <= len){
		putchar(input[len]);
		len--;
		}
	printf("\n");
	return 0;
}	
