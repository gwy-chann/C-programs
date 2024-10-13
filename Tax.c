#include<stdio.h>
int main () {
	int workHours;
	float excessHours, OT, grossPay, grossPayOT, tax, netPay;
	
	printf("Enter the number of hours worked in a week: ");
	scanf("%d",&workHours);
	
	grossPay = workHours * 12;

	
	if(workHours > 40) {
		excessHours = workHours - 40;
		OT = excessHours * 18;
		grossPayOT = grossPay + OT; 
		printf("Gross Pay : $%.2f\n", grossPayOT);
	} else {
		printf("Gross Pay: $%.2f\n", grossPay);
	}
	
	// Tax Rate
	if(grossPay - 300){
		tax = grossPay * 0.15;
	} else if (grossPay - 150) {
		tax = grossPay * 0.20;
	} else {
		tax = grossPay * 0.25;
	}
	
	printf("Tax : %.2f\n", tax);
	
	netPay = grossPay - tax;
	printf("Net Pay : %.2f\n", netPay);
	 
	
		
	
	return 0;
}
