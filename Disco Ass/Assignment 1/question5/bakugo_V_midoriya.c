#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char players[2*n];
    for(int i=0;i<2*n;i++)
    {
        scanf("%c",&players[i]);
    }
    
    for(int i = 0;i<2*n;i++)
    {
        if(players[i] == 'B' || players[i]=='M'|| players[i] ==' ')
        {
            for(int j=i;j< 2*n-1;j++)
        {
            players[j] = players[j+1];
        }

        }        
    }
    printf("%s", players);
    /*
    int k =0;
    int binary[n - 2];
    int f = 0;
    while(1)
    {
        char c;
        scanf("%c", &c);
        if (c == '\n')
        {
            if(f)
            break;
            else{f=1;}
        }
        else if(c!='B' && c!='M'&&c!=' ')
        {
            players[k++] = c;
        }

    }
    players[k] = '\0';
    printf("%s", players);
    for (int i = 0; i <= pow(2, n - 2); i++)
    {
        int count = 0;
        for (int j = 0; j <= n - 3; j++)
        {
            if ((i & (1 << j)) != 0)
                count++;
        }
        if (count == ((n - 2) / 2))
        {
            printf("M :");
            for (int j = 0; j <= n - 3; j++)
            {
                if ((i & (1 << j)) == 0)
                    printf("%c ", players[j]);
            }
            printf("B :");
            for (int j = 0; j <= n - 3; j++)
            {
                if ((i & (1 << j)) == 1)
                    printf("%c ", players[j]);
            }
            printf("\n");
        }
    }
*/
    return 0;
}
