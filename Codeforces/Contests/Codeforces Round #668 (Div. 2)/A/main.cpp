#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

void printVec(vi &a)
{
    for (auto &it : a)
        std::cout << it << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vi p(n);
        rep(i, 0, n) cin >> p[i];
        reverse(p.begin(), p.end());
        printVec(p);
        newline;
    }
    return 0;
}

/*
vi hashmap(300, 0);
            vi s(n - 1); //sort array
            vi result;
            for (int i = 0; i < n - 1; i++)
            {
                s[i] = p[i] + p[i + 1];
                hashmap[p[i]]++;
            }
            hashmap[p[n - 1]]++;
            sort(s.begin(), s.end());
            int i = 0;
            int k = 1;
            while (i < n - 1)
            {
                if (hashmap[k] and hashmap[(s[i] - k)])
                {
                    result.push_back(k);
                    result.push_back((s[i] - k));
                    hashmap[k]--;
                    hashmap[(s[i] - k)]--;
                    i++;
                }
                k++;
                if (k == n)
                    k = 1;
            }
            printVec(result);
*/