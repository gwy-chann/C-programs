#include <stdio.h>
#define DOUBLE_NEWLINE "\n\n"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int FirstQuiz, SecondQuiz, ThirdQuiz, FourthQuiz, FifthQuiz, TotalSumOfQuiz;
	float Average;
	
	printf("==== Average of your Quizzes ===" DOUBLE_NEWLINE);
	
	printf("Enter the score of your Quiz 1 : ");
		scanf("%i", &FirstQuiz);
	
	printf("Enter the score of your Quiz 2 : ");
		scanf("%i", &SecondQuiz);
	
	printf("Enter the score of your Quiz 3 : ");
		scanf("%i", &ThirdQuiz);
	
	printf("Enter the score of your Quiz 4 : ");
		scanf("%i", &FourthQuiz);

	printf("Enter the score of your Quiz 5 : ");
		scanf("%i", &FifthQuiz);
		
	TotalSumOfQuiz = FirstQuiz + SecondQuiz + ThirdQuiz + FourthQuiz + FifthQuiz;
	Average = TotalSumOfQuiz / 5;
	
	printf("\nYour Average is : %.2f", Average);
	
	
	
	return 0;
}
