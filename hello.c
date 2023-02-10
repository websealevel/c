#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*(pas de padding)*/
    printf("%s.\n", "hello, world !");
    /*(padding à droite par défaut)*/
    printf("%15s.\n", "hello, world !");
    /*padding à gauche*/
    printf("%-15s.\n", "hello, world !");
}
