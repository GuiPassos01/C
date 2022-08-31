#include<iostream>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float raio, area; 
	
	printf("Insira o tamanho do raio: ");
	scanf("%f", &raio);
	
	area = M_PI*pow(raio,2);
	
	printf("A area do circulo é: %.2f", area);
}
