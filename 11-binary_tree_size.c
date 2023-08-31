#include "binary_trees.h"

/**
 * binary_tree_size - get the size of the tree
 * @tree: root node
 * Return: returns the whole tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}
