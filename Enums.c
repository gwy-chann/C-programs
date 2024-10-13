#include<stdio.h>
int main () {
	
	enum Company {
		GOOGLE,
		FACEBOOK,
		XEROX,
		YAHOO,
		EBAY,
		MICROSOFT
	};
	
	 enum Company myCompany;
	 
	 myCompany =  XEROX, GOOGLE, EBAY;
	
	
	printf("%d \n%d \n%d", XEROX, GOOGLE, EBAY);
	
	return 0;
}
