#include "binary_trees.h"

/**
 * max_size_t - helper function to finde the larger of a and b
 * size_t
 * @a: first value
 * @b: second value
 * Return: larger size_t value
 */
size_t max_size_t(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - retrurns the height of binary tree
 * @tree: root node
 * Return: levels of the tree or 0 for NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (1 + max_size_t(binary_tree_height(tree->left),
			       binary_tree_height(tree->right)));
}
