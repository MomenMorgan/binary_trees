#include "binary_trees.h"

/**
 * binary_tree_postorder - post order
 * @tree: root node
 * @func: pointer to function to call for every node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
