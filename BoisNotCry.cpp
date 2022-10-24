#include <stdio.h>
#include <conio.h>
int main(){
	int Idade[10],N,i;
	float Peso[10],Soma,Media;
	char Resp;
	
	N = 0;
	Soma = 0;
	
	do{
		printf("\nInforme a idade e peso do boi %d: ",N+1);
		scanf("%d %f",&Idade[N],&Peso[N]);
		printf("Bois %d tem %d anos e %.2f quilos",N,Idade[N],Peso[N]);
		Soma = Soma + Peso[N];
		N++;
		printf("\nDigite s para continuar e n para terminar: ");
		Resp = getch();
		printf("%c", Resp);
	} while((Resp!='n')&&(Resp!='N'));
	Media = Soma/N;
	printf("\nForam lidos %d bois", N);
	printf("\nPeso Medio= %f",Media);
	printf("\nDados armazenados nos vetores Idade e Peso: ");
	for(i=0;i<N;i++){
		if(Peso[i]>=Media)
		printf("\n%d %d %f",i,Idade[i],Peso[i]);
	}
}
