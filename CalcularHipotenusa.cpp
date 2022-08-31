#include<iostream>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float a, b, hip;
	
	printf("Insira o valor de A: ");
	scanf("%f", &a);
	
	printf("Insira o valor de B: ");
	scanf("%f", &b);
	
	hip = sqrt(pow(a, 2) + pow(b, 2));
	
	printf("A hipotenusa é: %.2f", hip);
	
}
