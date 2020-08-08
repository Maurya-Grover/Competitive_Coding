#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, n, m(1000001);
    cin >> n;
    // tprime are numbers that are squares of prime numbers
    vector<bool> primes(m, true);
    primes[0] = primes[1] = false;
    for (ll p = 2; p * p <= m; p++)
    {
        if (primes[p])
        {
            for (ll j = p; p * j <= m; j++)
                primes[p * j] = false;
        }
    }
    vector<ll> t_primes;
    for (ll i = 2; i <= m; i++)
    {
        if (primes[i])
            t_primes.pb((ll)(i * i));
        if (i > 2)
            i++;
    }
    while (n--)
    {
        cin >> x;
        bool isT_prime = binary_search(t_primes.begin(), t_primes.end(), x);
        cout << (isT_prime ? "YES" : "NO") << "\n";
    }
    return 0;
}
/*
    debug print
    cout << binary_search(t_primes.begin(), t_primes.end(), 96) << "\n";
    for (auto it : t_primes)
        cout << it << "\n";
*/