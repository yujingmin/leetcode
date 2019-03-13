#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MIN(a,b) (a) < (b) ? (a) : (b) 

int nthUglyNumber(int n) {
	if (n < 1) {
		return 0;
	}
	int *ugly = (int *)malloc(n * sizeof(int));
	memset(ugly, 0, n * sizeof(int));
	int ugly_2 = 0;
	int ugly_3 = 0;
	int ugly_5 = 0;	
	ugly[0] = 1;
	int rv;
	for(int i = 1; i < n; i++) {
		int a = ugly[ugly_2] * 2;
		int b = ugly[ugly_3] * 3;
		int c = ugly[ugly_5] * 5;
		ugly[i] = MIN(a,MIN(b,c));
		printf("ind %d\n", ugly[i]);
		if (ugly[i] == a) {
			ugly_2++;
		}
		if (ugly[i] == b) {
			ugly_3++;
		}
		if (ugly[i] == c) {
			ugly_5++;
		}
	}
	rv = ugly[n - 1];
	free(ugly);
	return rv;
}

int main(int argc, char const *argv[])
{
	int rv;
	int n;
	n = atoi(argv[1]);
	rv = nthUglyNumber(n);
	printf("%d\n", rv);
	return 0;
}