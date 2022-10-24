#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void soma (int n1, int n2, int *resultado){
	*resultado = n1 - n2;
}

int soma(int n1, int n2){
	int res = n1 + n2;
	return res;
}

int main(int argc, char** argv) {

// variaveis visiveis local

	int x = 2;
	int y = 3;
 	int resultado = soma (x, y);
	printf("resultado: %d", resultado);
	
	int resultadoRef;
	soma(x, y, &resultadoRef);
	printf("\nresultado por ref: %d", resultadoRef);
	
	return 0;
}
