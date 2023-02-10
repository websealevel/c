#include <stdio.h>

/* affiche une table de conversion des degrés en Fahrenheit-Celsius*/

#define LOWER 0   /*limite basse de la table*/
#define UPPER 300 /*limite haute de la table*/
#define STEP 20   /* taille du pas*/

int main()
{
    // Déclaration (placé avant toute instruction)
    float fahrenheit;
    float celsius;

    fahrenheit = LOWER;

    // Header, aligné avec le tableau.
    printf("%12s\t%12s\n", "Fahrenheit", "Celsius");

    while (fahrenheit <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%12.0f\t%12.2f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + STEP;
    }
}