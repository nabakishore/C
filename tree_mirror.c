
void tree_mirror(node *root)
{
	if (root == NULL)
		return;
	else {
		tree_mirror(root->left);
		tree_mirror(root->right);

		node *tmp = root->left;
		root->left = root->right;
		root->right = tmp;
	}
}
