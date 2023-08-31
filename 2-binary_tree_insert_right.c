#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert tight child node
 * @parent:pointer to the right child node to be inserted
 * @value: integer to be stored
 * Return: pointer to new node 
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
		new_node->right = NULL;
	new_node->left = NULL;
	parent->right = new_node;

	return (new_node);
}
