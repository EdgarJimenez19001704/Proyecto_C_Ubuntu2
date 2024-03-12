#include <stdio.h>

int main() {
    float cantidad;
    char moneda;

    printf("Ingrese la cantidad de dinero: ");
    scanf("%f", &cantidad);

    printf("Ingrese la moneda (G para quetzales, D para dólares, E para euros): ");
    scanf(" %c", &moneda);

    switch(moneda) {
        case 'G':
        case 'g':
            printf("%.2f quetzales son %.2f dólares y %.2f euros.\n", cantidad, cantidad * 0.13, cantidad * 0.11);
            break;
        case 'D':
        case 'd':
            printf("%.2f dólares son %.2f quetzales y %.2f euros.\n", cantidad, cantidad * 7.67, cantidad * 0.85);
            break;
        case 'E':
        case 'e':
            printf("%.2f euros son %.2f quetzales y %.2f dólares.\n", cantidad, cantidad * 9.23, cantidad * 1.18);
            break;
        default:
            printf("Moneda no válida. Por favor, ingrese G para quetzales, D para dólares o E para euros.\n");
            break;
    }

    return 0;
}