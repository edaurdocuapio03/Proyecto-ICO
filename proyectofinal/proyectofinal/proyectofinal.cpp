#include <stdio.h>

int main() 
{
    int dia, mes, anio;

    scanf_s("%i %i %i", &dia, &mes, &anio);

    if ((anio % 4 == 0) && (anio % 100 != 0 || anio % 400 == 0)) {
        if (mes == 2) {
            if (dia != 29) {
                dia++;
            }
            else {
                mes++;
                dia = 1;
            }
        }
        else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
            mes == 10 || mes == 12) {

            if (dia == 31 && mes != 12) {
                mes++;
                dia = 1;
            }
            else if (dia == 31 && mes == 12) {
                dia = 1;
                mes = 1;
                anio++;
            }
            else {
                dia++;
            }

        }
        else {
            if (dia == 30) {
                mes++;
                dia = 1;
            }
            else {
                dia++;
            }
        }

    }
    else if (dia == 4 && mes == 10 && anio == 1582) {
        dia = 15;
    }
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia == 31 && mes != 12) {
            mes++;
            dia = 1;
        }
        else if (dia == 31 && mes == 12) {
            dia = 1;
            mes = 1;
            anio++;
        }
        else {
            dia++;
        }
    }
    else {
        if (dia == 30 || dia == 28) {
            mes++;
            dia = 1;
        }
        else {
            dia++;
        }
}
