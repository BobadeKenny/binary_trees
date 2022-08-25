#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: return a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent->parent;
	if (parent->left == node->parent)
	{
		uncle = parent->right;
	}
	if (parent->right == node->parent)
	{
		uncle = parent->left;
	}
	return (uncle);
}
