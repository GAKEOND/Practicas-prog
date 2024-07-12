#include <stdio.h>

int main() {
    int cont, usu, usu2;
    FILE *fptr;

    fptr = fopen("C:tablas.txt", "w"); // Duplicar las barras invertidas
    if (fptr == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    printf("IMPRESION DE N TABLAS\n");

    printf("Dame el numero inicial: ");
    scanf("%d", &usu);

    printf("Hasta que tabla quieres: ");
    scanf("%d", &usu2);

    for (cont = usu; cont <= usu2; cont++) {
        fprintf(fptr, "Tabla del %d:\n", cont);
        for (int i = 1; i <= 10; i++) {
            fprintf(fptr, "%d X %d = %d\n", i, cont, i * cont);
        }
        fprintf(fptr, "\n");
    }

    fprintf(fptr, "***GRACIAS POR UTILIZAR ESTE PROGRAMA*** NO OLVIDES COMPARTIRLO!!!!\n");
    fclose(fptr); // Cerrar el archivo

    printf("Tablas guardadas en el escritorio en tablas.txt\n");

    return 0;
}
