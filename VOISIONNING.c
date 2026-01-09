#include <stdio.h>

int main() {
    int a, b;
    int somme = 0, difference = 0;
    float division;
    printf("Entrez la première valeur entière : ");
    scanf("%d", &a);
    printf("Entrez la deuxième valeur entière : ");
    scanf("%d", &b);
    if (a > 0 && a % 2 == 0)
        somme += a;
    if (b > 0 && b % 2 == 0)
        somme += b;
    if (a < 0 && a % 2 != 0)
        difference += a;
    if (b < 0 && b % 2 != 0)
        difference -= b;
    if (b != 0) {
        division = (float)a / b;
        printf("Résultat de la division a / b : %.2f\n", division);
    } else {
        printf("Division impossible (division par zéro)\n");
    }
    printf("Somme des valeurs positives et paires : %d\n", somme);
    printf("Différence des valeurs négatives et impaires : %d\n", difference);

    return 0;
}
