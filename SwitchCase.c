#include<stdio.h>
int main () {
	float value1, value2;
	char operator;
	
	printf("Type in you expression : ");
	scanf("%f %c %f", &value1, &operator, &value2);
	
	switch (operator) {
		case '+':
			printf("%.2f\n", value1 + value2);
			break;
		case '-':
			printf("%.2f\n", value1 - value2);
			break;
		case '*':
			printf("%.2f\n", value1 * value2);
			break;
		case '/':
			if (value2 == 0) {
				printf("Division by zero.\n");
			} else {
				printf("%.2f\n", value1 / value2);
			}
			break;
		default:
			printf("Unknown operator.");
			break;
	}
	
	return 0;
}
