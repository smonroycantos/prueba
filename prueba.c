#include <stdio.h>
#include <conio.h>

int main()
{
    float monto, tasa, x, vmes;
    int time;
    printf("Escriba el monto a pagar\n");
    scanf("%f",&monto);

    printf("Escriba el tiempo a pagar en anos\n");
    scanf("%i",&time);

    printf("%-10s%-20s%s\n", "Ano", "Interes", "Cuota Mensual");
    printf("-----------------------------------------\n");

    float va=monto/time;
    for (int i = 0; i < time; i++)
    {
        tasa=monto*0.15;
        monto=monto-va;
        x=va+tasa;
        vmes=x/12;
        printf("%-10d%-20.2f%.2f\n", i + 1, tasa, vmes);
        
    }

    
    getch();
    return 0;
}
