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

typedef struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};

class BinaryTree
{
private:
    Node *root;
    void destroy_tree(Node *leaf)
    {
        if (leaf != NULL)
        {
            destroy_tree(leaf->left);
            destroy_tree(leaf->right);
            delete leaf;
        }
    }
    void insert(int key, Node *leaf)
    {
        if (key < leaf->data)
        {
            if (leaf->left != NULL)
                insert(key, leaf->left);
            else
                leaf->left = new Node(key);
        }
        else if (key >= leaf->data)
        {
            if (leaf->right != NULL)
                insert(key, leaf->right);
            else
                leaf->right = new Node(key);
        }
    }
    Node *search(int key, Node *leaf)
    {
        if (leaf != NULL)
        {
            if (key == leaf->data)
                return leaf;
            if (key < leaf->data)
                return search(key, leaf->left);
            else
                return search(key, leaf->right);
        }
    }

public:
    BinaryTree()
    {
        root = NULL;
    }
    ~BinaryTree()
    {
        destroy_tree(root);
    }
    void insert(int key)
    {
        if (root != NULL)
            insert(key, root);
        else
            root = new Node(key);
    }
    Node *search(int key)
    {
        return search(key, root);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}