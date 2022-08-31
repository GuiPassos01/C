#include<iostream>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float produto, desconto, val_final;
	
	printf("Insira o valor do produto: ");
	scanf("%f", &produto);
	
	desconto = produto*0.12;
	val_final = produto-desconto;
	
	printf("O produto com desconto é: %.2f", val_final);
	
}
