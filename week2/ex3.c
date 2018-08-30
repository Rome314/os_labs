#include <stdio.h>

int main(void) {
	int  m1, m2,cx;
	int n;
	scanf("%d",&n);
	m1 = m2 = (n - 1) * 2 / 2;
	cx = n * 2;
	int i, j;
	for (i = 0; i < n; ++i, --m1, ++m2){
		for(j = 0; j < cx; ++j){
			if((j >= m1) && (j <= m2)){
				fputc('*',stdout);
			}
			else{
				fputc(' ',stdout);
			}
		
		}
		fputc('\n',stdout);
	}
	fputc('\n',stdout);
	return 0;
}

