#include <iostream>
#include <stdio.h>
#include <locale.h>

int main() {
	/* =================================
	Nomes: Carlos Matos e Vit�ria Silva
	Projeto: Calculadora
	=====================================*/
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,soma,sub,divi,multi;
	char operacao;
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite a opera��o que deseja realizar: \n [+] [-] [*] [/] \n");
	scanf("%s", &operacao);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	soma = n1 + n2;
	sub = n1 - n2;
	divi = n1 / n2;
	multi = n1 * n2;
	if (operacao == '+'){
		printf("A soma dos valores �: %.2f \n",soma);
	}else if (operacao == '-'){
		printf("A subtracao dos valores �: %.2f \n",sub);
	}else if (operacao == '/'){
		printf("A divisao dos valores �: %.2f \n",divi);
	}else if (operacao == '*'){
		printf("A multiplicacao dos valores �: %.2f \n",multi);
	}else{
		printf("Digite uma opera��o v�lida.");
	}
	system ("pause");
	return 0;
}
