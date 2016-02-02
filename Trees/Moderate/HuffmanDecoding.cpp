/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    node * temp_node = root;
    for (auto c : s)
    {
        temp_node = (c == '0') ? temp_node->left : temp_node->right;
        if (temp_node->data)
        {
            cout << temp_node->data;
            temp_node = root;
        }  
    }
    return;
}
