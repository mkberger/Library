/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    //mkberger
    int small = min(v1,v2);
    int large = max(v1, v2);
    while(root->data < small || root->data > large)
    {
        root = (root->data < small) ? root->right : root->left;
    }
    return root;
    //
}
