#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a left child node
* @parent: parent node
* @value: interger node value
*
* Return: the inserted node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
	{
		return (NULL);
	}
	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;

	if (parent->right)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	else
	{
		right_node->right = NULL;
	}
	parent->right = right_node;

	return (right_node);
}
