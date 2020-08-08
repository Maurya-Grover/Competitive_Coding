#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int replacement(int arr[],int val)
{
    if(arr[val]==val)
    {
        return val;
    }
    else
    {
        replacement(arr,arr[val]);
    }
    
}
int main()
{
    char s[10000];
    int m;
    int arr[26];
    for(int i = 0;i<26;i++)
    {
        arr[i] = i;
    }
    scanf("%s",s);
    scanf("%d",&m);
    for(int i =0;i<m;i++)
    {
        char x,y;
        int x1,y1;
        scanf("\n%c %c",&x,&y);
        x1 = x-'a';
        y1 = y -'a';
        arr[x1]= y1;
    }
    for(int i = 0;i<strlen(s);i++)
    {
        int val = s[i] - 'a';
        s[i] = (char) replacement(arr,val)+'a';
    }
    printf("%s",s);
    return 0;
}
