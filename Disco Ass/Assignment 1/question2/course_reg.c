#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int find(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int matrix[n][n], prereq, course;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &prereq, &course);
        prereq = find(a, n, prereq);
        course = find(a, n, course);
        //printf("(%d,%d)\n",prereq,course);
        matrix[prereq][course] = 1;
    }
    int pre;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
    }
    for (int i = 0; i < n;)
    {
        for (int j = 0; j < n; j++)
        {
            pre = 0;
            for (int k = 0; k < n; k++)
            {
                if (matrix[k][j]!=0)
                {
                    pre++;
                    break;
                }
            }
            if (!pre)
            {
                ans[i++] = j;
                for (int k = 0; k < n; k++)
                {
                    if (matrix[j][k] != -1)
                        matrix[j][k] = 0;
                    matrix[k][j] = -1;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[ans[i]]);
    }
    return 0;
}