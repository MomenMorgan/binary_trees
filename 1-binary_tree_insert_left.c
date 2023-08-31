#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
	return (NULL);
	}
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node-> = value;
	new_node-> parent = parent;
	if (parent->left)
	{
	new_node->left = parent->left;
	parent->left->parent - new_node;
	}
	parent->left = new_node;
        
	return (new_node);
        

}
