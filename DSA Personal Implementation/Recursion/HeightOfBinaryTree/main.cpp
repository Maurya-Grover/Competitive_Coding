#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

typedef struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *createBinaryTree(vector<int> &a)
{
    vector<TreeNode *> tree;
    for (int i = 0; i < a.size(); i++)
        tree.pb(new TreeNode(a[i]));
    int index = 0, pos = 0;
    while (pos < a.size())
    {
        tree[index]->left = tree[++pos];
        tree[index]->right = tree[++pos];
        index++;
    }
    return tree[0];
}

int heightOfBinaryTree(TreeNode *root)
{
    if(root == nullptr)
        return 0;
    int leftHeight = heightOfBinaryTree(root->left);
    int rightHeight = heightOfBinaryTree(root->right);
    return max(leftHeight, rightHeight) + 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    TreeNode *root = createBinaryTree(a);
    cout << heightOfBinaryTree(root);
    return 0;
}