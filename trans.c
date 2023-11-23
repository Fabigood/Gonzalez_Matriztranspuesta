#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n, m;
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &n); // se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &m);

    int Matrix[n][m];

    printf("la matriz original es: \n");

    for (int i = 0; i < n; i++)
    {//for para imprimir la matrix normal 
        printf("\n");

        for (int j = 0; j < m; j++)
        {
            Matrix[i][j] = rand() % 100 + 1;        //agregamos para tener numeros randoms

            printf("%d\t", Matrix[i][j]);
        }
    }
    printf("\nLa matrix transpues es :\n");

    int MatrixTra[m][n];
     for (int i = 0 ; i < m; i++)
    {
        printf("\n");   //se hace li mismo que arriba solo que cambiamos en los valores por lad filas por las columas 
        for (int j = 0; j < n; j++){

            MatrixTra[i][j]=Matrix[j][i]; //se dice que la matrixtranspuesta se igual a la matrix normal para poder llenarla y no tner el problema del vacio
            printf("%d\t", MatrixTra[i][j]);

        }
    }

    return 0;
}