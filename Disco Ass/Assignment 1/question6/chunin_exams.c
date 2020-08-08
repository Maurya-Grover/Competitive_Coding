#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
    long int n;
    scanf("%d", &n);
    long int arr[n], mirror[n];
    for (long int i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
        mirror[i] = 1;
    }
    long int count = 0;
    for (long int i = 0; i < n; i++)
    {
        for (long int j = 0; j < n; j++)
        {
            if ((arr[j] % arr[i] == 0) && (i != j))
            {
                mirror[i] = 0;
                count++;
                break;
            }
        }
    }
    printf("%ld\n", n - count);
    for (long int i = 0; i < n; i++)
    {
        if (mirror[i] == 1)
        {
            printf("%ld ", arr[i]);
        }
    }

    /*
    int max = arr[0];
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    max++;
    int cum_freq[max];
    for(int i = 0 ;i<max;i++)
    {
        cum_freq[i] = 0;
    }
    for(int i =0; i<n;i++)
    {
        cum_freq[arr[i]] = 1;
        for(int j =1;j<sqrt(arr[i]);j++)
        {
            if(arr[i]%j==0)
            {
                cum_freq[j]++;
            }
        }
    }
    int count =0;
    for(int i = 1;i<max;i++)
    {
        if(cum_freq[i] == 1)
        {
            count++;
            printf("%d ",i);
            
        }
    }*/

    return 0;
}
