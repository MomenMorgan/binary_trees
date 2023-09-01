#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: node to check
 * Return: pointer to node sharing same parent
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
