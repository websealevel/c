#include <stdio.h>

/* affiche une table de conversion des degrés en Fahrenheit-Celsius*/

int main()
{
    // Déclaration (placé avant toute instruction)
    float fahrenheit;
    float celsius;
    int lower;
    int upper;
    int step;

    // Assignement
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    // Header, aligné avec le tableau.
    printf("%12s\t%12s\n","Celsius", "Fahrenheit");

    while (celsius <= upper)
    {
        fahrenheit = celsius * (9.0/5.0) + 32.0;
        printf("%12.0f\t%12.2f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}