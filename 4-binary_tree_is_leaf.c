#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checkes if binary tree's node is a leaf
 * @node: node to be checked
 * Return: 1 for true 0 for false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
