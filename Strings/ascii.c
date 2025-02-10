// print ascii val of a char

#include <stdio.h>

void main (){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	int a = ch;
	printf("The ascii val of '%c' is %d", ch, a);
	
}
