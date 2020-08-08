#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    long long int n;
    getline(cin, s); // lowercase english chars
    cin >> n;
    int n1 = s.length();
    long long int a_count = 0;
    for(int i = 0; i < n1; i++)
        if(s[i] == 'a')
            a_count++;
    a_count = a_count * (n / n1);
    n = n % n1;
    for(int i = 0; i < n; i++)
        if(s[i] == 'a')
            a_count++;
    cout << a_count++;
    return 0;
}