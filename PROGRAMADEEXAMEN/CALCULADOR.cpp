#include <stdio.h>

int multiplo;
int i;
int Resultado;

int main ()
{
printf("Digite el numero del que se desee conocer su tabla de multiplicar\n");
scanf_s("%i", &multiplo);

for (i=1; i <= 10; i++)
{
Resultado= multiplo*i;
printf("%i x %i es igual a %i\n", multiplo, i, Resultado);

}
return 0;
}
