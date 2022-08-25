#include "binary_trees.h"

/**
 * get_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: depth
 */
int get_depth(const binary_tree_t *tree)
{
	int d;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check.
 * @depth: pointer to the root node of the tree to check.
 * @level: pointer to the root node of the tree to check.
 * Return: 0 or 1
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level + 1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	return (is_perfect(tree->left, depth, level + 1) &&
	is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
	{
		return (0);
	}
	depth = get_depth(tree);
	return (is_perfect(tree, depth, 0));
}
