#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void classificaDupla(int e1, int e2, int *s1, int *s2){

	if (e1 > e2){
		*s1 = e2;
		*s2 = e1;}
	else{
		*s1 = e1;
		*s2 = e2;}

}

int main(int argc, char *argv[]) {
	
	int a, b, r1, r2,i;
	
	for(i=1;i<5;i++){
		printf("\nDigite dois valores: ");
		scanf("%d %d", &a, &b);
		classificaDupla(a,b,&r1,&r2);
	//r1 vai receber o menor valor
	//r2 vai receber o maior valor
	
	printf("Menor: %d Maior: %d ", r1, r2);}
	
	return 0;
}

/*	int x = 2;
	int y = 1;
	
	y = x; 
	
	printf("enderecos &x = 0x%x &y = 0x%x\n", &x, &y);
	printf("conteudo x = %d y = %d", x, y);
*/
	
/*	int x = 2;
	int *px;
	
	px = &x;
	
	printf("Endereco em decimal: px = %d 	&x = %d\n", px, &x);
	printf("Endereco em hexa: 	 px = 0x%x  &x = 0x%x\n", px, &x);
	printf("Conteudos (valores)  *px = %d 	 x = %d", *px, x);
*/
/*	int a, b, c;	//a,b,c são variaveis
	int *p;			//p é um ponteiro para um inteiro
	int *q;			//q é um ponteiro para um inteiro5
	
	//lendo valores de a e b do usuario
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);

	p = &a; 	 //o valor de p é o endereço de a
	q = &b;		 //q aponta para b
	c = *p + *q; // c recebe o conteudo(valor) de *p + *q
	
	printf("c = %d", c);
*/
