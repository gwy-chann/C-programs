#include<stdio.h>
int main () {
	printf("=== Byte size of the following data types ===\n");
	printf("size of int         : %zu bytes\n", sizeof(int));
	printf("size of char        : %zu bytes\n", sizeof(char));
	printf("size of long        : %zu bytes\n", sizeof(long));
	printf("size of long long   : %zu bytes\n", sizeof(long long));
	printf("size of double      : %zu bytes\n", sizeof(double));
	printf("size of long double : %zu bytes\n", sizeof(long double));
	
	return 0;
}
