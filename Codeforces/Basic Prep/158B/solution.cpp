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
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    int hashmap[5] = {0};
    int s[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        hashmap[temp]++;
    }
    int noOfTaxis = 0;
    if (n > 1)
    {
        noOfTaxis += hashmap[4];
        noOfTaxis += hashmap[3];
        if (hashmap[3] >= hashmap[1])
            // in this case all 1 group goes with three
            hashmap[1] = 0;
        else
            // in this case saare 3 gaye bache hue ka mamla settle karo
            hashmap[1] = hashmap[1] - hashmap[3];

        noOfTaxis += hashmap[2] / 2;
        if (hashmap[2] % 2 == 1)
        {
            noOfTaxis++;
            if (hashmap[1] >= 1)
            {
                hashmap[1]--;
                hashmap[1]--;
            }
        }
        if (hashmap[1] > 0)
        {
            noOfTaxis += hashmap[1] / 4;
            if (hashmap[1] % 4)
                noOfTaxis++;
        }
    }
    else
        noOfTaxis = 1;
    cout << noOfTaxis;
    return 0;
}