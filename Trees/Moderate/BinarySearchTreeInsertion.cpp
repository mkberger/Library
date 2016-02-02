/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    // mkberger
    if(root == nullptr)
    {
        node * add = new node();
        add->data = value;
        add->left = nullptr;
        add->right = nullptr;
        root = add;
    }
    else if(root->data > value) root->left = insert(root->left, value);
    else if(root->data < value) root->right = insert(root->right, value);
    //
   return root;
}
