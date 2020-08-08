#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int elements[500][500] = {0};
    int x, y;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        elements[x][y] = 1;
    }
    int reflexive = 1, symmetric = 1, transitive = 1, equivalence = 0;
    for (int i = 1; i <= n; i++)
    {
        if (elements[i][i] == 0)
        {
            reflexive = 0;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (elements[i][j] != elements[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (elements[i][j] == 1 &&  elements[j][k] == 1 && elements[i][k] == 0)
                {
                    transitive = 0;
                    break;
                }
            }
        }
    }
    if(reflexive)
    printf("Reflexive\n");
    if(symmetric)
    printf("Symmetric\n");
    if(transitive)
    printf("Transitive\n");
    if(reflexive == 1 && symmetric == 1 && transitive == 1)
    printf("Equivalence");
    return 0;
}

