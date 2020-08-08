#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

typedef struct Treenode
{
    int data;
    Treenode *left;
    Treenode *right;
    Treenode(int val)
    {
        this->data = val;
        this->left = this->right = NULL;
    }
};

int maxDepth(Treenode *root)
{
    if (root == NULL) return 0;
    return (max(maxDepth(root->left), maxDepth(root->right)) + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}