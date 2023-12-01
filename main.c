#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoes.h"

struct strInput{
	double x, y;
};

struct strResp{
	char respAd, respSub, respMult, respDiv, respGer;
};

int main(){
	struct strInput input;
	struct strResp resp;
	int operacao;

	do{
		printf("Digite a operação que deseja executar: \n");
		printf("1 - Adição (+)\n");
		printf("2 - Subtração (-)\n");
		printf("3 - Multiplicação (x)\n");
		printf("4 - Divisão (/)\n");
		fflush(stdout);
		scanf("%i", &operacao);

		switch(operacao){
		case 1:
			do{
				printf("Digite os números da adição: \n");
				fflush(stdout);
				scanf("%lf", &input.x);
				printf("+\n");
				fflush(stdout);
				scanf("%lf", &input.y);

				printf("Resultado: %.1lf\n", adicao(input.x, input.y));
				printf("Deseja realizar outra adição? (s/n)\n");
				fflush(stdin);
				fflush(stdout);
				scanf("%c", &resp.respAd);
			}while(resp.respAd != 'n');
			break;
		case 2:
			do{
				printf("Digite os números da subtração: \n");
				fflush(stdout);
				scanf("%lf", &input.x);
				printf("-\n");
				fflush(stdout);
				scanf("%lf", &input.y);

				printf("Resultado: %.1lf\n", subtracao(input.x, input.y));
				printf("Deseja realizar outra subtração? (s/n)\n");
				fflush(stdin);
				fflush(stdout);
				scanf("%c", &resp.respSub);
			}while(resp.respSub != 'n');
			break;
		case 3:
			do{
				printf("Digite os números da multiplicação: \n");
				fflush(stdout);
				scanf("%lf", &input.x);
				printf("x\n");
				fflush(stdout);
				scanf("%lf", &input.y);

				printf("Resultado: %.1lf\n", multiplicacao(input.x, input.y));
				printf("Deseja realizar outra multiplicação? (s/n)\n");
				fflush(stdin);
				fflush(stdout);
				scanf("%c", &resp.respMult);
			}while(resp.respMult != 'n');
			break;
		case 4:
			do{
				printf("Digite os números da divisão: \n");
				fflush(stdout);
				scanf("%lf", &input.x);
				printf("/\n");
				fflush(stdout);
				scanf("%lf", &input.y);

				printf("Resultado: %.1lf\n", divisao(input.x, input.y));
				printf("Deseja realizar outra divisão? (s/n)\n");
				fflush(stdin);
				fflush(stdout);
				scanf("%c", &resp.respDiv);
			}while(resp.respDiv != 'n');
			break;
		default:
			printf("Esse número não faz parte da lista!\n");
		}

		printf("Deseja realizar outra operação? (s/n)\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &resp.respGer);
	}while(resp.respGer != 'n');

	printf("PROGRAMA ENCERRADO.");
	return 0;
}
