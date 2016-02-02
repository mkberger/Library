#include <algorithm>
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    // mkberger
    if(root == nullptr) return 0;
    return max(height(root->left)+1, height(root->right)+1);
    //
}
  
