#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int checkTransition(long long int x,int num)
{
    int flag = 0;
    for(long long int i = 0; i<num;i++)
    {
        if (x==pow(2,i))
        {
            flag =1;
        }
    }
    return flag;
}
int main()
{
    int num,counter=0;
    scanf("%d",&num);
    for(long long int i = 0;i<pow(2,num);i++)
    {
        printf("%lld: ",i);
        for(long long int j = i+1;j<pow(2,num);j++)
        {
            if(checkTransition(i^j,num))
            {
                printf("%lld ",j);
                counter++;
            }
        }
        printf("\n");
    }
    printf("%d",counter);
    return 0;
}
