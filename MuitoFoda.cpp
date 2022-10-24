#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int absoluto(int n){
	if(n<0)
		n = n*(-1);
	return n;}

int main(int argc, char *argv[]) {
	
	
	int numero, resultado, i;
	for(i=0; i<5; i++){
	printf("\nnumero: ");
	scanf("%d", &numero);
	
	resultado = absoluto(numero);
	printf("\nResultado: %d", resultado);
}
	
	return 0;
}
