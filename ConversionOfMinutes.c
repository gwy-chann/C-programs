#include<stdio.h>
int main () {
	
	printf("=== Convert Minutes to Years and Days ===\n\n");
	
	int minutes; 
	double years, days;
	
	printf("Enter the minutes you want to convert : ");
	scanf("%d", &minutes);
	
	years = minutes * 0.0000019013;
	days = minutes * 0.000694;
	
	printf("\nConversion to year(s) : %.2f year(s)", years);
	printf("\nConversion to day(s)  : %.2f day(s)", days);
		
	return 0;
}
