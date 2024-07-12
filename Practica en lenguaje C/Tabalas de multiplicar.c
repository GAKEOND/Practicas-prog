#include <stdio.h>
int main(void) {
int cont, usu, usu2,opc;
do
{
printf("IMPRESION DE N TABLAS\n");
printf("Dame el numero inicial: ");
scanf("%d", &usu);
printf("Hasta que tabla quieres: ");
scanf("%d", &usu2);
for(cont = usu; cont <= usu2; cont++) {
   printf("Tabla del %d:\n", cont);
        for(int i = 1; i <= 10; i++) {
            printf("%d X %d = %d\n", i, cont, i * cont);
          }
        printf("\n");
    }
printf("***GRACIAS POR UTILIZAR ESTE PROGRAMA*** NO OLVIDES COMPARTIRLO!!!!\n");
printf("Si quieres generar mas tabalas presiona S si no N");
} while (opc);
return 0;
}
