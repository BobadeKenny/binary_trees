#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the nodes of a binary tree
 * @tree: pointer to the root node of the tree to measure the nodes.
 * Return: nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (left + right + 1);
}
