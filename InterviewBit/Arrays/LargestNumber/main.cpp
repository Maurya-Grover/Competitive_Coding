#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vi A(n);
    rep(i, 0, n) cin >> A[i];
    vector<string> input(A.size());
    for(int i = 0; i < A.size(); i++)
        input[i] = to_string(A[i]);
    string ans;
    for(int i = 0; i < input.size(); i++)
        ans.append(input[i]);
    cout << ans;
    return 0;
}