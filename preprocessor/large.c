// Write a program of in'c' for fingding largest of 2 nos using macro

#include<stdio.h>

#define LARGE(a, b) (a>b? a:b)

void main(){
	int x, y, z;
	printf("enter 2 nos\n");
	scanf("%d %d", &x, &y);
	z = LARGE(x, y);
	printf("The largest no is %d", z);
}
  
