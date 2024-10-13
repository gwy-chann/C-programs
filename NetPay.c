#include<stdio.h>
#define DOUBLE_NEWLINE "\n\n"

int main() {
	int DailyRate, NumberOfDay, Tax, SSS, Salary, TotalDeduction, NetPay;
	const int PAG_IBIG = 100;
   
	printf("=== Enter the following info to get your net pay ===" DOUBLE_NEWLINE);
	
	printf("Enter your Daily Rate              : ");
	scanf("%i", &DailyRate);
	
	printf("Enter the number of your work days : ");
	scanf("%i", &NumberOfDay);
		
		
	Salary = DailyRate * NumberOfDay;
	
	Tax = 0.1 * Salary;
	SSS = 0.05 * Salary;
	
	TotalDeduction = Tax + SSS + PAG_IBIG;
	
	NetPay = Salary - TotalDeduction;
	
	printf("\nYour Net Pay is                    : %i", NetPay);
	
	return 0;
}

