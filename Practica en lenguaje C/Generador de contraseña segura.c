
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int c; // Declaración de la variable c
    printf("Dame la longitud de caracteres:\n");
    scanf("%d", &c);
    
    // Rangos de códigos ASCII imprimibles
    int min_ascii = 33; // Primer caracter imprimible en ASCII
    int max_ascii = 126; // Último caracter imprimible en ASCII
    
    // Inicializar la semilla para los números aleatorios
    srand(time(NULL));
    
    printf("Aqui tienes tu clave:\n\n\n");
    for (int i = 0; i < c; ++i) {
        char random_char = min_ascii + rand() % (max_ascii - min_ascii + 1);
        printf("%c", random_char);
    }
    printf("\n\n\n\n");
    printf("AHORA TIENES UNA CLAVE SEGURA\n");
    return 0; // Indicar que el programa terminó correctamente
}
