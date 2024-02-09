/* Este codigo ha sido generado por el modulo psexport 20230113-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main()
{
	float area;
	float lado;
	/* etapa 1 - definir entrada */
	/* etapa 2 - datos de entrada (leer) */
	printf("ingresa el valor del lado del cuadrado\n");
	scanf("%f", &lado);
	/* etapa 3 - proceso (operacion matematica para area) */
	area = lado*lado;
	/* etapa 4 - mostrar resultado */
	printf("el area del cuadrado es; %fcm2n", area);

	if (area>100);
    {
		printf("Area muy grande\n");
	}
	else
	{
		printf("Area muy chica\n");
	}
	return 0;
}

