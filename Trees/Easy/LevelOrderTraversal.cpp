/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    // mkberger
    int i = 0;
    int n = 1;
    node* temp_node;
    node * node_array[10000];
    if(root != nullptr) node_array[0] = root;
    while(i<n)
    {
        temp_node = node_array[i];
        if(temp_node->left)
        {
            node_array[n++] = temp_node->left;
        }
        if(temp_node->right)
        {
            node_array[n++] = temp_node->right;
        }
        i++;
    }
    for(int i = 0; i < n; i++)
    {
        cout << (node_array[i])->data << " ";
    }
    //
}
