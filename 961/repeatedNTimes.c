#include <stdio.h>
#include <stdlib.h>

int repeatedNTimes(int* A, int ASize) {
	int tmp[10000] = {0};
	int res;
	for (int i = 0; i < ASize; i++) {
		if (tmp[A[i]] != 0) {
			return A[i];
		} else {
			tmp[A[i]] = 1;
		}
	}   
	return 0;
}

int main(int argc, char const *argv[])
{
	int res;
	int a[6] = {1,2,3,4,4,4};
	res = repeatedNTimes(a,6);
	printf("%d\n", res);
	return 0;
}