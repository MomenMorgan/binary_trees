#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if binary tree node is a root
 * @node: node to be checked
 * Return: 1 on true 0 on false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
}
