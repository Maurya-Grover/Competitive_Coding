typedef struct Node
{
    int data;
    Node *left;
    Node *right;
};

// create node
Node *newNode(int x)
{
    Node *node = new Node();
    node->data = x;
    node->left = node->right = NULL;
    return node;
}

// insert node
Node *insert(Node *node, int x)
{
    if (node == NULL)
        return newNode(x);
    if (x <= node->data)
        node->left = insert(node->left, x);
    else if (x > node->data)
        node->right = insert(node->right, x);
    return node;
}

// delete node
Node *deleteNode(Node *root, int key)
{
    if (not root)
        return root;
    if(key < root->data)
        root->left = deleteNode(root->left, key);
    else if(key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if(not root->left)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(not root->right)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = minValue(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// search value
Node *search(Node *node, int x)
{
    if (not node || node->data == x)
        return node;
    else if (node->data < x)
        return search(node->right, x);
    else
        return search(node->left, x);
}

// minValue
Node *minValue(Node *node)
{
    Node *cur = node;
    while (cur and cur->left)
        cur = cur->left;
    return cur;
}
// maxValue
Node *maxValue(Node *node)
{
    Node *cur = node;
    while (cur and cur->right)
        cur = cur->right;
    return cur;
}

// check if BST - 3 func needed
bool checkBST(Node *root)
{
    if (not root)
        return true;
    if (isSubTreeLesser(root->left, root->data) and isSubTreeGreater(root->right, root->data))
        if (checkBST(root->left) and checkBST(root->right))
            return true;
        else
            return false;
}
//check if subtree is lesser than value
bool isSubTreeLesser(Node *root, int value)
{
    if (not root)
        return true;
    if (root->data <= value and isSubTreeLesser(root->left, value) and isSubTreeLesser(root->right, value))
        return true;
    else
        return false;
}
//check if subtree is greater than value
bool isSubTreeGreater(Node *root, int value)
{
    if (not root)
        return true;
    if (root->data > value and isSubTreeGreater(root->left, value) and isSubTreeGreater(root->right, value))
        return true;
    else
        return false;
}

// level order traversal - i.e. BFS
void levelOrder(Node *root)
{
    if (not root)
        return;
    deque<Node *> q;
    q.push_back(root);
    while (not q.empty())
    {
        Node *cur = q.front();
        q.pop_front();
        // use cur->data
        // cout << cur->data << " ";
        if (not cur->left)
            q.push_back(cur->left);
        if (not cur->right)
            q.push_back(cur->right);
    }
}

// DFS - includes Preorder, Inorder, Postorder
// Preorder
void preorder(Node *root)
{
    if (not root)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder
void inorder(Node *root)
{
    if (not root)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder
void postorder(Node *root)
{
    if (not root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}