#include "binary_trees.h"

/**
 * binary_tree_delete - delete a tree
 * @tree: pointer to the root node of the tree to delete
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
