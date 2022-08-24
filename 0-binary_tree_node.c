#include "binary_trees.h"

/**
* binary_tree_node - functions that creates a binary tree node
* @parent: the parent node of the binary tree
* @value: integer value of each node
*
* Return: the created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
	{
		return (NULL);
	}
	parent->n = value;
	parent->right = NULL;
	parent->left = NULL;

	return (parent);
}
