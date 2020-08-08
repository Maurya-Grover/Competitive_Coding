#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int heightabcd[26];
    for (int i = 0; i < 26; i++)
        cin >> heightabcd[i];
    /*
    //debug print statement
    for (int i = 0; i < 26; i++)
        cout << heightabcd[i];
    */
    char input[10];
    cin >> input;
    int max = heightabcd[input[0] - 'a'];
    for (int i = 1; i < strlen(input); i++)
        max = (max < heightabcd[input[i] - 'a']) ? heightabcd[input[i] - 'a'] : max;
    cout << max * strlen(input);
    return 0;
}