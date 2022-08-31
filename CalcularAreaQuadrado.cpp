#include<iostream>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float lado, h;
	
	printf("Insira o tamanho do lado: ");
	scanf("%f", &lado);
	
	h = lado*lado;
	
	printf("A area do quadrado é igual a: %.1f", h);
}
