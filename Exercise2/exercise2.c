/* Here, you should entry the required libraries */
#include <stdio.h>

void main(){
	/* Here, you should write the source code of your program */
	int sumando, resultado;
	
	printf("Introduce the first number: ");
	scanf("%d", &sumando);
	resultado = sumando;
	printf("Introduce the second number: ");
	scanf("%d", &sumando);
	resultado += sumando;
	printf("Introduce the third number: ");
	scanf("%d", &sumando);
	resultado += sumando;
	
	printf("the result is %d", resultado);
}
