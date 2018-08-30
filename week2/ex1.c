#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
	int integer = INT_MAX;
	float flt =FLT_MAX;
	double dbl = DBL_MAX;
	printf("%d %lu\n%f %lu\n%G %lu\n",integer,sizeof(integer),flt,sizeof(flt),dbl,sizeof(dbl));
	return 0;
}

