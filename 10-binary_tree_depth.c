#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 *of a node in a binary tree
 * @tree: node to mesures
 * Return: levels from root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	for (depth = 0; tree->parent; depth++)
		tree = tree->parent;

	return (depth);
}
