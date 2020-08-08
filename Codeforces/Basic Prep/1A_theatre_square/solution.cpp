#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m, a;
    cin >> n >> m >> a;
    int lengthWiseNumber, widthWiseNumber;
    if (n % a)
        lengthWiseNumber = (n / a) + 1;
    else
        lengthWiseNumber = (n / a);
    if (m % a)
        widthWiseNumber = (m / a) + 1;
    else
        widthWiseNumber = (m / a);
    cout << lengthWiseNumber * widthWiseNumber;
    return 0;
}