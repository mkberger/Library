/* you only have to complete the function given below.  
Node is defined as  
struct node
{
    int data;
    node* left;
    node* right;
};
*/

void Inorder(node *root) {
    //mkberger
    if (root != nullptr)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
    return;
    //
}
