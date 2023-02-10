#include <stdio.h>

/* affiche une table de conversion des degrés en Fahrenheit-Celsius*/

int main()
{
    // Déclaration (placé avant toute instruction)
    float fahrenheit;

    // Header, aligné avec le tableau.
    printf("%12s\t%12s\n", "Fahrenheit", "Celsius");

    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20)
    {
        printf("%12.0f\t%12.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));
    }
}