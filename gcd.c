#include<stdio.h>

int main(){
	int a; // first number
	int count = 1;; //for gcd
	int b; //second number
	printf("Enter first number: ");
	scanf("%d", &a); //input first number
	printf("Enter second number: ");
	scanf("%d", &b); //input second number

	for(int i = 2; i < a; i++){ //to check factors
		if(a%i==0 && b%i==0)
		{
			count = i;
		}
	}

	printf("GCD: %d\n", count); // print gcd

}		
