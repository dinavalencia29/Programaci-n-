#include <stdio.h>
#include <conio.h>
 
 int main()
{
   float radio, resultado;
   const float pi = 3.1416;
   int opcion;
   
	printf("\n Calcula el area y perimetro del circulo"); 
	printf("\n 1 Calcula el area del circulo"); 
	printf("\n 2 Calcula el perimetro del circulo");
	printf("\n Selecciona una opcion 1 o 2: ");
	scanf("%d", &opcion);
	
	if (opcion == 1 || opcion == 2) {
	printf("\nDame el radio: ");
	scanf("%f", &radio);
	}
	
	switch (opcion) {
		
		case 1:
		    resultado = pi*radio*radio;
		    printf("Area: %.2f\n", resultado);
	    	break;
		case 2:
			resultado = 2*radio*pi;
			printf("Perimetro: %.2f\n", resultado);
	    	break;
		default:
			printf ("\n Opcion invalida");	
    	}
    
    return 0;
}
