#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	left = binary_tree_depth(tree->parent);
	right = binary_tree_depth(tree->parent);
	if (left < right)
	{
		return (left + 1);
	}
	else
	{
	return (right + 1);
	}
}
