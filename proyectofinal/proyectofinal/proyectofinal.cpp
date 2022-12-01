#include <stdio.h>

int main() 
{
    int dia, mes, anio;

    scanf_s("%i %i %i", &dia, &mes, &anio);

    if ((anio % 4 == 0) && (anio % 100 != 0 || anio % 400 == 0)) {
}
