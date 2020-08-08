#include<bits/stdc++.h>
using namespace std;

int flag = 0;
int inorder[100];


typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;


node* newNode (int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
  
    return Node;  
}  
node* parse(int inorder[],int start,int end){


    if (start > end)  
        return NULL;  
  
    /* Find index of the maximum element from Binary Tree */
    int i = (start+end)/2;  
  
    /* Pick the maximum value and make it root */
    node *root = newNode(inorder[i]);  
  
    /* If this is the only element in inorder[start..end],  
    then return it */
    if (start == end)  
        return root;  
  
    /* Using index in Inorder traversal, construct left and  
    right subtrees */
    root->left = parse (inorder, start, i - 1);  
    root->right = parse (inorder, i + 1, end);  
  
    return root;  
    

}

void findchild(node *root,int x){
    if(root->left == NULL && root->right == NULL){
        return;
    }
    if(root->data == x){
        flag = 1;
        cout<<"Left: "<<root->left->data<<"\n";
        cout<<"Right: "<<root->right->data<<"\n";
        return; 
    }
    
    else{
        if(root){
        findchild(root->left,x);
        findchild(root->right,x);
        }
    }
    

}

int main(int argc, char const *argv[])
{
    int n,a,q,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        inorder[i] = a;
    }
    node *root = parse(inorder,0,n-1);
    
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>x;
        flag = 0;
        findchild(root,x);
        if(!flag){
            cout<<"Left: NULL\n";
            cout<<"Right: NULL\n";
            }
    }
    


    return 0;
}
