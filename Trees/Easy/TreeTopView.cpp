/*
You are given a pointer to the root of a binary tree. Print the top view of the binary tree. 
You only have to complete the function. 

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
    // mkberger
    if(root == nullptr) return;
    if(root->left)
    {
        root->left->right = nullptr;
        top_view(root->left);
    }
    cout << root->data << " ";
    if(root->right)
    {
        root->right->left = nullptr;
        top_view(root->right);
    }
    //
}
