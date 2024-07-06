int sumLeaf(Node *root)
{
    // Code here
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }
    int a = sumLeaf(root->left);
    int b = sumLeaf(root->right);
    return a + b;
}