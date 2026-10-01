#include <stdio.h>
int main()
{
    int n, m, sum = 0;
    int trace_of_matrix = 0;

    printf("for order of matrix we need number of row and column \n");
    printf("number of row:");
    scanf("%d", &n);
    printf("number of column:");
    scanf("%d", &m);
    if (n != m)
    {
        printf("trace of matrix is not define\n");
    }
    int mat[n][m];
    printf("enter %d number for filling  position\n", n * m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("A%d%d=", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < m; j++)
        {
            printf("A%d%d ", i + 1, j + 1);
        }
        printf("|\n");
    }
    printf("\n");
    printf("the required matrix is \n");
    for (int i = 0; i < n; i++)
    {
        {
            printf("| ");
            for (int j = 0; j < m; j++)
            {
                {

                    printf("%d ", mat[i][j]);
                    sum = sum + mat[i][j];
                    if (i == j && n == m)
                    {
                        trace_of_matrix = trace_of_matrix + mat[i][j];
                    }
                }
            }
            printf("|\n");
        }
    }
    printf("the sum of all element of needed matrix : ");
    printf("%d", sum);
    printf("\ntrace of matrix =%d", trace_of_matrix);
    return 0;
}
