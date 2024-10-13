#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double Height, Width, Perimeter, Area;
	
	printf("Enter the Height of the Rectangle : ");
		scanf("%lf", &Height);
		
	printf("Enter the Width of the Rectangle  : ");
		scanf("%lf", &Width);
	
	Perimeter = (Height + Width) * 2;
	Area = Height * Width; 
	
	printf("\n The perimeter of Rectangle is %.2f.", Perimeter);
	printf("\n The area of Rectangle is %.2f.", Area);
	
	return 0;
}
