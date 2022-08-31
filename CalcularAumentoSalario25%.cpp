#include<iostream>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float sal, sal_final, aum;
	
	printf("Insira o salario do funcionario: ");
	scanf("%f", &sal);
	
	aum = sal*0.25;
	sal_final = sal+aum;
	
	printf("O salario com aumento de 25% é: %.2f", sal_final);
}
