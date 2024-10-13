#include<stdio.h>
#include<stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main () {
	
	int workhours;
	float grosspay, taxes, netpay, overtimePay;
	
	printf("Enter your worked hours in a week : ");
	scanf("%d", &workhours);
	
	if(workhours <= 40) {
		grosspay = workhours * PAYRATE;
	} else {
		grosspay = 40 * PAYRATE;
		overtimePay = (workhours - 40) * (PAYRATE * 1.5);
		grosspay += overtimePay;
	} 
	
	// taxes
	
	if(grosspay <= 300) {
		taxes = grosspay * TAXRATE_300;
	} else if (grosspay > 300 && grosspay <= 450) {
		taxes = 300 * TAXRATE_300;
		taxes += (grosspay - 300) * TAXRATE_150;
	} else if (grosspay > 450) {
		taxes = 300 * TAXRATE_300;
		taxes += 150 * TAXRATE_150;
		taxes += (grosspay - 450) * TAXRATE_REST;
	}
	
	netpay = grosspay - taxes;
	
	printf("Gross pay:  %.2f\n", grosspay);
	printf("Tax: %.2f\n", taxes);
	printf("Net pay: %.2f\n", netpay);
	
	return 0;
}
