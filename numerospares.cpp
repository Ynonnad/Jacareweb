#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int maiorNumero(int x1, int x2){
	int resultado = -1;
	
	if(x1>x2)
		resultado = x1;
	else if (x1<x2)
		resultado = x2;
	
	return resultado;
}

int main(int argc, char *argv[]) {
	int a,b,i,res;
	
	for(i=0;i<5;i++){
		
	printf("Informe um par de numeros: ");
	scanf("%d %d",&a,&b);
	
	res = maiorNumero(a,b);
	if (res == -1)
		printf("Eles sao iguais\n");
	else
		printf("Maior: %d\n", res);
	}
	
 return 0;
}
