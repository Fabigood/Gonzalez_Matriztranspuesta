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
    {
        printf("\n");

        for (int j = 0; j < m; j++)
        {
            Matrix[i][j] = rand() % 100 + 1;

            printf("%d\t", Matrix[i][j]);
        }
    }
printf("\nLa matrix transpues es :\n");

int MatrixTra[m][n]
for (int )





    return 0;
}