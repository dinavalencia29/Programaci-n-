#include <iostream>
#include <cstdio>
 
 int main()
{
   float  base, altura, area;;
 
	printf("Calcula"); 
	printf("\n Ingrese la base: "); 
	scanf("%f", &base);
	printf("\n Ingrese la altura:  ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	  
	printf("\nEl area es: %.2f ",area);

    return 0;
    
}


