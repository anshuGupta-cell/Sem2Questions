// DIFF BET #define SQUARE(x) (x*x) VS #define SQUARE(x) x*x                                                                               

#include<stdio.h>

//#define LARGE(x) x*x
#define SQUARE(x) (x*x)

void main(){
	int x, z;
	printf("enter a nos\n");
	scanf("%d", &x);
	z = SQUARE(x);
	printf("The SUARE  is %d", z);
}
  
//NO difference
