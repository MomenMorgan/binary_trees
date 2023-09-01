#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: root node
 * Return: 1 if tree and all the nodes below it have 2 children
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (tree->right && tree->left)
	{
		if ((!tree->left->left && !tree->left->right) &&
		    (!tree->right->left && !tree->right->right))
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	else if (!(tree->parent))

		return (1);

	return (0);
}
