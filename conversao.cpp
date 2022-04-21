#include <iostream>
#include <stdio.h>
#include <locale.h>

/* ==================================
Nomes: Carlos Matos e Vitoria Silva
Projeto: ConversÃ£o KM
====================================*/

int main() {
	setlocale(LC_ALL,"Portuguese");
	float km, milhas, metros, centimetros;
	int unidade;
	printf("Digite o valor em Km para converter: ");
	scanf("%f",&km);
	milhas = km / 1.609344;
	metros = km * 1000;
	centimetros = km * 100000;
	printf("Digite a unidade de medida que quer converter\n [1] Milhas \n [2] Metros\n [3] Centímetros \n");
	scanf("%d", &unidade);
	if (unidade == 1){
		printf("%.2f km são %.5f milhas \n",km,milhas);
	}else if (unidade == 2){
		printf("%.2f km são %.2f metros \n",km,metros);
	}else if (unidade == 3){
	printf("%.2f km são %.2f centímetros \n",km,centimetros);
	}else{
		printf("Digite uma unidade válida");
	}
	return 0;
}
