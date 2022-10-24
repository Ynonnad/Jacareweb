#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float areaCirculo(float Raio){
	float res = 2*pi*Raio;
	return res;
}

float compCircunferencia(float Raio){
	float res = pi*Raio*Raio;
	return res;
}

int main(int argc, char *argv[]) {
	float raio,resArea,resComp;
	do{
	printf("Informe o raio: ");
	scanf("%f", &raio);
	if(raio>0)
		break;
	resArea = areaCirculo(raio);
	resComp = compCircunferencia(raio);
	
	printf("\nA area do circulo eh %f",resArea);
	printf("\nO comprimento do circulo eh %f",resComp);
} while (raio>=0);
	return 0;
}
